cmake_minimum_required(VERSION 3.10)

project(PyBindTestLib)
set(CMAKE_CXX_STANDARD 20)
set(PYBIND11_PYTHON_VERSION 3.8)

# set(pybind11_DIR "/home/jec/applications/anaconda3/lib/python3.8/site-packages/pybind11/share/cmake/")
set(CMAKE_CXX_FLAGS "-Wall -Wextra -fPIC")
set(CMAKE_PREFIX_PATH "/home/jec/applications/anaconda3/lib/python3.8/site-packages/pybind11/")

# set(CMAKE_PREFIX_PATH "/home/jec/applications/anaconda3/lib/python3.8/site-packages/pybind11/include/")
find_package(pybind11 REQUIRED)

pybind11_add_module(${PROJECT_NAME} pywrap.cpp)

target_compile_definitions(${PROJECT_NAME} PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})
target_include_directories(${PROJECT_NAME} PRIVATE ${PYBIND11_INCLUDE_DIRS})




