
        # -*- coding: utf-8 -*-
# pylint: disable=invalid-name

from __future__ import (absolute_import, division)
from copy import deepcopy
from math import log, exp, sqrt
import sys
import numpy as np	
from numpy import eye, zeros, dot, isscalar, outer
from scipy.linalg import cholesky
from filterpy.kalman import unscented_transform
from filterpy.stats import logpdf
from filterpy.common import pretty_str

class UnscentedKalmanFilter(object):
    # pylint: disable=too-many-instance-attributes
    # pylint: disable=invalid-name
   
    def __init__(self, dim_x, dim_z, dt, hx, fx, points,
                    sqrt_fn=None, x_mean_fn=None, z_mean_fn=None,
                    residual_x=None,
                    residual_z=None):
            #pylint: disable=too-many-arguments

            self.x = zeros(dim_x)   # dim_x * 1 행렬 생성
            self.P = eye(dim_x)     # dim_x * dim_x 대각 행렬 생성
            self.x_prior = np.copy(self.x)
            self.P_prior = np.copy(self.P)
            self.Q = eye(dim_x)     #dim_x * dims_x 대각 행렬 생성
            self.R = eye(dim_z)     #dim_x * dims_x 대각 행렬 생성
            self._dim_x = dim_x
            self._dim_z = dim_z
            self.points_fn = points
            self._dt = dt
            self._num_sigmas = points.num_sigmas()
            self.hx = hx
            self.fx = fx
            self.x_mean = x_mean_fn
            self.z_mean = z_mean_fn

            # Only computed only if requested via property
            self._log_likelihood = log(sys.float_info.min)
            self._likelihood = sys.float_info.min
            self._mahalanobis = None

            if sqrt_fn is None:
                self.msqrt = cholesky
            else:
                self.msqrt = sqrt_fn

            # weights for the means and covariances.
            self.Wm, self.Wc = points.Wm, points.Wc

            if residual_x is None:
                self.residual_x = np.subtract
            else:
                self.residual_x = residual_x

            if residual_z is None:
                self.residual_z = np.subtract
            else:
                self.residual_z = residual_z

            # sigma points transformed through f(x) and h(x)
            # variables for efficiency so we don't recreate every update

            self.sigmas_f = zeros((self._num_sigmas, self._dim_x))
            self.sigmas_h = zeros((self._num_sigmas, self._dim_z))

            self.K = np.zeros((dim_x, dim_z))    # Kalman gain
            self.y = np.zeros((dim_z))           # residual
            self.z = np.array([[None]*dim_z]).T  # measurement
            self.S = np.zeros((dim_z, dim_z))    # system uncertainty
            self.SI = np.zeros((dim_z, dim_z))   # inverse system uncertainty

            self.inv = np.linalg.inv

            # these will always be a copy of x,P after predict() is called
            self.x_prior = self.x.copy()
            self.P_prior = self.P.copy()

            # these will always be a copy of x,P after update() is called
            self.x_post = self.x.copy()
            self.P_post = self.P.copy()


    def predict(self, dt=None, UT=None, fx=None, **fx_args):
            
            if dt is None:
                dt = self._dt

            if UT is None:
                UT = unscented_transform

            # calculate sigma points for given mean and covariance
            self.compute_process_sigmas(dt, fx, **fx_args)

            #and pass sigmas through the unscented transform to compute prior
            self.x, self.P = UT(self.sigmas_f, self.Wm, self.Wc, self.Q,
                                self.x_mean, self.residual_x)

            # save prior
            self.x_prior = np.copy(self.x)
            self.P_prior = np.copy(self.P)


    def update(self, z, R=None, UT=None, hx=None, **hx_args):
            """
            Update the UKF with the given measurements. On return,
            self.x and self.P contain the new mean and covariance of the filter.

            Parameters
            ----------

            z : numpy.array of shape (dim_z)
                measurement vector

            R : numpy.array((dim_z, dim_z)), optional
                Measurement noise. If provided, overrides self.R for
                this function call.

            UT : function(sigmas, Wm, Wc, noise_cov), optional
                Optional function to compute the unscented transform for the sigma
                points passed through hx. Typically the default function will
                work - you can use x_mean_fn and z_mean_fn to alter the behavior
                of the unscented transform.

            **hx_args : keyword argument
                arguments to be passed into h(x) after x -> h(x, **hx_args)
            """

            if z is None:
                self.z = np.array([[None]*self._dim_z]).T
                self.x_post = self.x.copy()
                self.P_post = self.P.copy()
                return

            if hx is None:
                hx = self.hx

            if UT is None:
                UT = unscented_transform

            if R is None:
                R = self.R
            elif isscalar(R):
                R = eye(self._dim_z) * R

            # pass prior sigmas through h(x) to get measurement sigmas
            # the shape of sigmas_h will vary if the shape of z varies, so
            # recreate each time
            sigmas_h = []
            for s in self.sigmas_f:
                sigmas_h.append(hx(s, **hx_args))

            self.sigmas_h = np.atleast_2d(sigmas_h)

            # mean and covariance of prediction passed through unscented transform
            zp, self.S = UT(self.sigmas_h, self.Wm, self.Wc, R, self.z_mean, self.residual_z)
            self.SI = self.inv(self.S)

            # compute cross variance of the state and the measurements
            Pxz = self.cross_variance(self.x, zp, self.sigmas_f, self.sigmas_h)


            self.K = dot(Pxz, self.SI)        # Kalman gain
            self.y = self.residual_z(z, zp)   # residual

            # update Gaussian state estimate (x, P)
            self.x = self.x + dot(self.K, self.y)
            self.P = self.P - dot(self.K, dot(self.S, self.K.T))

            # save measurement and posterior state
            self.z = deepcopy(z)
            self.x_post = self.x.copy()
            self.P_post = self.P.copy()

            # set to None to force recompute
            self._log_likelihood = None
            self._likelihood = None
            self._mahalanobis = None


    def cross_variance(self, x, z, sigmas_f, sigmas_h):
            """
            Compute cross variance of the state `x` and measurement `z`.
            """

            Pxz = zeros((sigmas_f.shape[1], sigmas_h.shape[1]))
            N = sigmas_f.shape[0]
            for i in range(N):
                dx = self.residual_x(sigmas_f[i], x)
                dz = self.residual_z(sigmas_h[i], z)
                Pxz += self.Wc[i] * outer(dx, dz)
            return Pxz


    def compute_process_sigmas(self, dt, fx=None, **fx_args):
            """
            computes the values of sigmas_f. Normally a user would not call
            this, but it is useful if you need to call update more than once
            between calls to predict (to update for multiple simultaneous
            measurements), so the sigmas correctly reflect the updated state
            x, P.
            """

            if fx is None:
                fx = self.fx

            # calculate sigma points for given mean and covariance
            sigmas = self.points_fn.sigma_points(self.x, self.P)

            for i, s in enumerate(sigmas):
                self.sigmas_f[i] = fx(s, dt, **fx_args)


    def batch_filter(self, zs, Rs=None, dts=None, UT=None, saver=None):
            
            #pylint: disable=too-many-arguments

            try:
                z = zs[0]
            except TypeError:
                raise TypeError('zs must be list-like')

            if self._dim_z == 1:
                if not(isscalar(z) or (z.ndim == 1 and len(z) == 1)):
                    raise TypeError('zs must be a list of scalars or 1D, 1 element arrays')
            else:
                if len(z) != self._dim_z:
                    raise TypeError(
                        'each element in zs must be a 1D array of length {}'.format(self._dim_z))

            z_n = np.size(zs, 0)
            if Rs is None:
                Rs = [self.R] * z_n

            if dts is None:
                dts = [self._dt] * z_n

            # mean estimates from Kalman Filter
            if self.x.ndim == 1:
                means = zeros((z_n, self._dim_x))
            else:
                means = zeros((z_n, self._dim_x, 1))

            # state covariances from Kalman Filter
            covariances = zeros((z_n, self._dim_x, self._dim_x))

            for i, (z, r, dt) in enumerate(zip(zs, Rs, dts)):
                self.predict(dt=dt, UT=UT)
                self.update(z, r, UT=UT)
                means[i, :] = self.x
                covariances[i, :, :] = self.P

                if saver is not None:
                    saver.save()

            return (means, covariances)


    def rts_smoother(self, Xs, Ps, Qs=None, dts=None, UT=None):
            
            #pylint: disable=too-many-locals, too-many-arguments

            if len(Xs) != len(Ps):
                raise ValueError('Xs and Ps must have the same length')

            n, dim_x = Xs.shape

            if dts is None:
                dts = [self._dt] * n
            elif isscalar(dts):
                dts = [dts] * n

            if Qs is None:
                Qs = [self.Q] * n

            if UT is None:
                UT = unscented_transform

            # smoother gain
            Ks = zeros((n, dim_x, dim_x))

            num_sigmas = self._num_sigmas

            xs, ps = Xs.copy(), Ps.copy()
            sigmas_f = zeros((num_sigmas, dim_x))

            for k in reversed(range(n-1)):
                # create sigma points from state estimate, pass through state func
                sigmas = self.points_fn.sigma_points(xs[k], ps[k])
                for i in range(num_sigmas):
                    sigmas_f[i] = self.fx(sigmas[i], dts[k])

                xb, Pb = UT(
                    sigmas_f, self.Wm, self.Wc, self.Q,
                    self.x_mean, self.residual_x)

                # compute cross variance
                Pxb = 0
                for i in range(num_sigmas):
                    y = self.residual_x(sigmas_f[i], xb)
                    z = self.residual_x(sigmas[i], Xs[k])
                    Pxb += self.Wc[i] * outer(z, y)

                # compute gain
                K = dot(Pxb, self.inv(Pb))

                # update the smoothed estimates
                xs[k] += dot(K, self.residual_x(xs[k+1], xb))
                ps[k] += dot(K, ps[k+1] - Pb).dot(K.T)
                Ks[k] = K

            return (xs, ps, Ks)


    def log_likelihood(self):
        if self._log_likelihood is None:
            self._log_likelihood = logpdf(x=self.y, cov=self.S)
        return self._log_likelihood

    def likelihood(self):
        if self._likelihood is None:
            self._likelihood = exp(self.log_likelihood)
            if self._likelihood == 0:
                self._likelihood = sys.float_info.min
        return self._likelihood

    def mahalanobis(self):
        if self._mahalanobis is None:
            self._mahalanobis = sqrt(float(dot(dot(self.y.T, self.SI), self.y)))
        return self._mahalanobis

    def __repr__(self):
        return '\n'.join([
            'UnscentedKalmanFilter object',
            pretty_str('x', self.x),
            pretty_str('P', self.P),
            pretty_str('x_prior', self.x_prior),
            pretty_str('P_prior', self.P_prior),
            pretty_str('Q', self.Q),
            pretty_str('R', self.R),
            pretty_str('S', self.S),
            pretty_str('K', self.K),
            pretty_str('y', self.y),
            pretty_str('log-likelihood', self.log_likelihood),
            pretty_str('likelihood', self.likelihood),
            pretty_str('mahalanobis', self.mahalanobis),
            pretty_str('sigmas_f', self.sigmas_f),
            pretty_str('h', self.sigmas_h),
            pretty_str('Wm', self.Wm),
            pretty_str('Wc', self.Wc),
            pretty_str('residual_x', self.residual_x),
            pretty_str('residual_z', self.residual_z),
            pretty_str('msqrt', self.msqrt),
            pretty_str('hx', self.hx),
            pretty_str('fx', self.fx),
            pretty_str('x_mean', self.x_mean),
            pretty_str('z_mean', self.z_mean)
            ])

