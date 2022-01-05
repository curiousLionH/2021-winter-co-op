import time
import open3d as o3d
import numpy as np
from scipy.spatial import ConvexHull
import math as m

def minimum_bounding_rectangle(points):
    """
    Find the smallest bounding rectangle for a set of points.
    Returns a set of points representing the corners of the bounding box.

    :param points: an nx2 matrix of coordinates
    :rval: an nx2 matrix of coordinates
    """
    from scipy.ndimage.interpolation import rotate
    pi2 = np.pi/2.

    # get the convex hull for the points
    hull_points = points[ConvexHull(points).vertices]

    # calculate edge angles
    edges = np.zeros((len(hull_points)-1, 2))
    edges = hull_points[1:] - hull_points[:-1]

    angles = np.zeros((len(edges)))
    angles = np.arctan2(edges[:, 1], edges[:, 0])

    angles = np.abs(np.mod(angles, pi2))
    angles = np.unique(angles)

    # find rotation matrices
    # XXX both work
    rotations = np.vstack([
        np.cos(angles),
        np.cos(angles-pi2),
        np.cos(angles+pi2),
        np.cos(angles)]).T
#     rotations = np.vstack([
#         np.cos(angles),
#         -np.sin(angles),
#         np.sin(angles),
#         np.cos(angles)]).T
    rotations = rotations.reshape((-1, 2, 2))

    # apply rotations to the hull
    rot_points = np.dot(rotations, hull_points.T)

    # find the bounding points
    min_x = np.nanmin(rot_points[:, 0], axis=1)
    max_x = np.nanmax(rot_points[:, 0], axis=1)
    min_y = np.nanmin(rot_points[:, 1], axis=1)
    max_y = np.nanmax(rot_points[:, 1], axis=1)

    # find the box with the best area
    areas = (max_x - min_x) * (max_y - min_y)
    best_idx = np.argmin(areas)

    # return the best box
    x1 = max_x[best_idx]
    x2 = min_x[best_idx]
    y1 = max_y[best_idx]
    y2 = min_y[best_idx]
    r = rotations[best_idx]

    rval = np.zeros((4, 2))
    rval[0] = np.dot([x1, y2], r)
    rval[1] = np.dot([x2, y2], r)
    rval[2] = np.dot([x2, y1], r)
    rval[3] = np.dot([x1, y1], r)

    return rval


def draw_speed_vector(x, y, v_x, v_y):
    if v_x >300:
        v_x = 0
    if v_y > 300:
        v_y = 0

    z = 1
    lines = []

    points = [
    [x, y, z], # id == min_z
    [x + v_x, y + v_y, z],
    ]

    # lines = [
    #     [0, 1],
    # ]

    for i in range(len(points)-1):
        lines.append([i,i+1])
    # print(points)
    # print(lines)
    return points, np.array(lines)



def draw_grid_line():
    
    grid_width_a = np.arange(-40,41,5)
    grid_width_a = np.repeat(grid_width_a, 2) 

    grid_height_a = np.arange(-30,81,5)
    grid_height_a = np.repeat(grid_height_a, 2) 
       
    grid_width_b = np.array([grid_width_a[0],grid_width_a[-1]])
    grid_width_b = np.tile(grid_width_b, int(grid_height_a.size/2))

       
    grid_height_b = np.array([grid_height_a[0],grid_height_a[-1]])
    grid_height_b = np.tile(grid_height_b, int(grid_width_a.size/2))

    grid_x = np.hstack([grid_width_a, grid_width_b])
    grid_y = np.hstack([grid_height_b, grid_height_a])
    grid_z = np.zeros(grid_width_a.size + grid_height_a.size)

    grid_points = np.column_stack([grid_x, grid_y, grid_z])
   
    grid_lines = np.arange(grid_width_a.size + grid_height_a.size)
    grid_lines = np.reshape(grid_lines, (-1,2))

    grid_line_set = o3d.geometry.LineSet(
        points=o3d.utility.Vector3dVector(grid_points),
        lines=o3d.utility.Vector2iVector(grid_lines),
    )
    grid_colors = [[74/255.0, 70/255.0, 67/255.0] for i in range(len(grid_lines))]
    grid_line_set.colors = o3d.utility.Vector3dVector(grid_colors)

    return grid_line_set

def rotation_matrix(roll, pitch, yaw):
    rx = [[1, 0, 0], [0, np.cos(roll), -np.sin(roll)], [0, np.sin(roll), np.cos(roll)]]
    ry = [[np.cos(pitch), 0, np.sin(pitch)], [0, 1, 0], [-np.sin(pitch), 0, np.cos(pitch)]]
    rz = [[np.cos(yaw), -np.sin(yaw), 0], [np.sin(yaw), np.cos(yaw), 0], [0, 0, 1]]

    Rx = np.array(rx, dtype='double')
    Ry = np.array(ry, dtype='double')
    Rz = np.array(rz, dtype='double')
    R = np.matmul(Rz, np.matmul(Ry,Rx))

    return R

def homogeneous_matrix(x, y, z, roll, pitch, yaw):

    '''
    [x, roll/
     y, pitch/
     z, yaw]]
    '''

    R = rotation_matrix(roll, pitch, yaw)
    T = np.array([x, y, z])
    Rt = np.column_stack((R, T))
    Rt = np.vstack((Rt, np.array([0, 0, 0, 1])))
    
    return Rt

# def draw_3d_bbox(x1, x2, x3, x4, min_z, max_z):
#     points = [
#     [x3[0], x3[1], min_z], # id == min_z
#     [x2[0], x2[1], min_z],
#     [x1[0], x1[1], min_z],
#     [x4[0], x4[1], min_z],
#     [x3[0], x3[1], max_z],
#     [x2[0], x2[1], max_z],
#     [x1[0], x1[1], max_z],
#     [x4[0], x4[1], max_z],
#     ]

#     lines = [
#         [0, 1],
#         [0, 2],
#         [1, 3],
#         [2, 3],
#         [4, 5],
#         [4, 6],
#         [5, 7],
#         [6, 7],
#         [0, 4],
#         [1, 5],
#         [2, 6],
#         [3, 7],
#     ]

#     return points, np.array(lines)


def draw_mid_points(x, y, min_z, max_z, x4, vx, vy, dt):
    mid_points = [
        [x,y,(max_z - min_z)/2]
        [x+dt*vx, y+dt*vy, (max_z - min_z)/2]
    ]
    mid_lines = [
        [0,1]
    ]

def draw_3d_bbox(x, y, width, depth, min_z, max_z, yaw):
    points = [
    [m.cos(yaw)*(0 - width/2) - m.sin(yaw)*(0 - depth/2) + x, m.sin(yaw)*(0 - width/2) + m.cos(yaw)*(0 - depth/2) + y, min_z], # id == min_z
    [m.cos(yaw)*(0 + width/2) - m.sin(yaw)*(0 - depth/2) + x, m.sin(yaw)*(0 + width/2) + m.cos(yaw)*(0 - depth/2) + y, min_z],
    [m.cos(yaw)*(0 - width/2) - m.sin(yaw)*(0 + depth/2) + x, m.sin(yaw)*(0 - width/2) + m.cos(yaw)*(0 + depth/2) + y, min_z],
    [m.cos(yaw)*(0 + width/2) - m.sin(yaw)*(0 + depth/2) + x, m.sin(yaw)*(0 + width/2) + m.cos(yaw)*(0 + depth/2) + y, min_z],
    [m.cos(yaw)*(0 - width/2) - m.sin(yaw)*(0 - depth/2) + x, m.sin(yaw)*(0 - width/2) + m.cos(yaw)*(0 - depth/2) + y, max_z], # id == min_z
    [m.cos(yaw)*(0 + width/2) - m.sin(yaw)*(0 - depth/2) + x, m.sin(yaw)*(0 + width/2) + m.cos(yaw)*(0 - depth/2) + y, max_z],
    [m.cos(yaw)*(0 - width/2) - m.sin(yaw)*(0 + depth/2) + x, m.sin(yaw)*(0 - width/2) + m.cos(yaw)*(0 + depth/2) + y, max_z],
    [m.cos(yaw)*(0 + width/2) - m.sin(yaw)*(0 + depth/2) + x, m.sin(yaw)*(0 + width/2) + m.cos(yaw)*(0 + depth/2) + y, max_z],
    ]

    lines = [
        [0, 1],
        [0, 2],
        [1, 3],
        [2, 3],
        [4, 5],
        [4, 6],
        [5, 7],
        [6, 7],
        [0, 4],
        [1, 5],
        [2, 6],
        [3, 7],
    ]

    return points, np.array(lines)

# def draw_3d_bbox(x, y, width, depth, min_z, max_z):
#     points = [
#     [x - width/2, y - depth/2, min_z], # id == min_z
#     [x + width/2, y - depth/2, min_z],
#     [x - width/2, y + depth/2, min_z],
#     [x + width/2, y + depth/2, min_z],
#     [x - width/2, y - depth/2, max_z],
#     [x + width/2, y - depth/2, max_z],
#     [x - width/2, y + depth/2, max_z],
#     [x + width/2, y + depth/2, max_z],
#     ]

#     lines = [
#         [0, 1],
#         [0, 2],
#         [1, 3],
#         [2, 3],
#         [4, 5],
#         [4, 6],
#         [5, 7],
#         [6, 7],
#         [0, 4],
#         [1, 5],
#         [2, 6],
#         [3, 7],
#     ]

#     return points, np.array(lines)

def draw_ground_line(arr_x, arr_y, arr_color):

    z = np.ones(len(arr_x))*0.05
    xy = np.column_stack((arr_x, arr_y))
    points = np.column_stack((xy, z))

    lines = []

    for i in range(len(z)-1):
        lines.append([i,i+1])

    
    
    colors = [arr_color for i in range(len(lines))]

    return points, np.array(lines), colors

def change_view_callback(vis):
    ctr = vis.get_view_control()
    global bool_topview

    if bool_topview:
        ctr.convert_from_pinhole_camera_parameters(topview_param)
        print("=== Press 'Space bar', change Perspective View ===")
    else:
        ctr.convert_from_pinhole_camera_parameters(perspectiveview_param)
        print("=== Press 'Space bar', change Top View ===")

    bool_topview = not(bool_topview)

def text_3d(pcd ,text, pos, direction=None, degree=-90.0, font='/usr/share/fonts/truetype/freefont/FreeMono.ttf', font_size=16):
    """
    Generate a 3D text point cloud used for visualization.
    :param text: content of the text
    :param pos: 3D xyz position of the text upper left corner
    :param direction: 3D normalized direction of where the text faces
    :param degree: in plane rotation of text
    :param font: Name of the font - change it according to your system
    :param font_size: size of the font
    :return: o3d.geoemtry.PointCloud object
    """
    if direction is None:
        direction = (0., 0., 1.)

    from PIL import Image, ImageFont, ImageDraw
    from pyquaternion import Quaternion

    font_obj = ImageFont.truetype(font, font_size )
    font_dim = font_obj.getsize(text)

    img = Image.new('RGB', font_dim, color=(255, 255, 255))
    draw = ImageDraw.Draw(img)
    draw.text((0, 0), text, font=font_obj, fill=(127, 127, 0))
    img = np.asarray(img)
    img_mask = img[:, :, 0] < 128
    indices = np.indices([*img.shape[0:2], 1])[:, img_mask, 0].reshape(3, -1).T
    # print(indices.shape)
    # pcd = o3d.geometry.PointCloud()
    pcd.colors = o3d.utility.Vector3dVector(img[img_mask, :].astype(float) / 255.0)
    pcd.points = o3d.utility.Vector3dVector(indices * 6 / 100.0)

    raxis = np.cross([0.0, 0.0, 1.0], direction)
    if np.linalg.norm(raxis) < 1e-6:
        raxis = (0.0, 0.0, 1.0)
    trans = (Quaternion(axis=raxis, radians=np.arccos(direction[2])) *
             Quaternion(axis=direction, degrees=degree)).transformation_matrix
    trans[0:3, 3] = np.asarray(pos)
    pcd.transform(trans)
    return pcd
#o3d.visualization.draw_geometries([line_set], zoom=0.8)

# grid_line_set = draw_grid_line()

# ego_vehicle = o3d.io.read_triangle_mesh("ego_LQ.stl")
# ego_vehicle.compute_vertex_normals()
# ego_vehicle.paint_uniform_color([215/255.0, 215/255.0, 215/255.0])

# transform = homogeneous_matrix(0, 0, 1.73, 0, 0, np.pi/2.0)

# vis = o3d.visualization.Visualizer()
# vis.create_window(width=700, height=900)
# ctr = vis.get_view_control()


# opt = vis.get_render_option()
# opt.background_color = np.array([18/255.0, 19/255.0, 13/255.0])

# vis.add_geometry(grid_line_set)

# vis.add_geometry(ego_vehicle)

# ###raw_points = o3d.geometry.PointCloud()
# raw_points = o3d.io.read_point_cloud(file_path + "lidar_sample/" + "0.pcd")


# vis.add_geometry(raw_points)

# ctr.set_zoom(0.095)   #FUCK
# ctr.translate(0, 950)
# ctr.rotate(0, -350)
# ctr.translate(0, -80)


# for i in range(100):
    
#     start = time.time()
#     read_points = o3d.io.read_point_cloud(file_path + "lidar_sample/" + str(i) + ".pcd")
#     print(round((time.time()-start)*1000), "ms")
#     raw_points.points = (read_points.transform(transform)).points
    
#     time.sleep(0.1)
    
    

#     vis.update_geometry(raw_points)
#     vis.poll_events()
#     vis.update_renderer()
    
    
# vis.destroy_window()


#Yellow 255, 205, 0/ [254/255.0, 233/255.0, 25/255.0]
#red 187, 32, 32

#blue 3 24 41 64/ 5 91 166/ 3 103 166/ 13 159 217/ 27 203 242

#np.array([18/255.0, 19/255.0, 13/255.0])

