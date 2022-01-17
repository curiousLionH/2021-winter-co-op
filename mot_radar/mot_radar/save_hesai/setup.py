from setuptools import setup

package_name = 'save_hesai'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='amlab',
    maintainer_email='jt1640@naver.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'save_hesai = save_hesai.main_v2:main',
            'get_txt = save_hesai.get_txt:main',
            'fit_test = save_hesai.fit_test:main',
            'save_hesai_test = save_hesai.test:main'
        ],
    },
)
