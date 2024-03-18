from setuptools import find_namespace_packages

from skbuild import setup

with open("README.md") as f:
    long_description = f.read()

setup(
    name="bleak-winrt",
    version = "1.2.0",
    description="Python WinRT bindings for Bleak",
    long_description=long_description,
    long_description_content_type="text/markdown",
    license="MIT",
    author='Microsoft Corporation',
    url="https://github.com/dlech/bleak-winrt",
    classifiers=[
            'Development Status :: 4 - Beta',
            'Environment :: Win32 (MS Windows)',
            'License :: OSI Approved :: MIT License',
            'Operating System :: Microsoft :: Windows :: Windows 10',
            'Programming Language :: Python :: 3.7',
            'Programming Language :: Python :: 3.8',
            'Programming Language :: Python :: 3.9',
            'Programming Language :: Python :: 3.10',
            'Programming Language :: Python :: 3.11',
            'Programming Language :: Python :: 3.12',
            'Programming Language :: Python :: Implementation :: CPython',
            'Topic :: System :: Operating System',
        ],
    packages=find_namespace_packages(where=("pywinrt")),
    package_dir={"": "pywinrt"}, 
    cmake_args=['-DCMAKE_BUILD_TYPE=Release', '-DCMAKE_C_COMPILER=cl', '-DCMAKE_CXX_COMPILER=cl'],
    # recursive glob (**) doesn't seem to work here
    package_data={"bleak_winrt": ["py.typed", "*.pyi", "*/*.pyi", "*/*/*.pyi", "*/*/*/*.pyi", "*/*/*/*/*.pyi"]},
)
