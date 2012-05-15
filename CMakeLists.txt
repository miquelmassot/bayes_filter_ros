cmake_minimum_required(VERSION 2.4.6)
include($ENV{ROS_ROOT}/core/rosbuild/rosbuild.cmake)

# Set the build type.  Options are:
#  Coverage       : w/ debug symbols, w/o optimization, w/ code-coverage
#  Debug          : w/ debug symbols, w/o optimization
#  Release        : w/o debug symbols, w/ optimization
#  RelWithDebInfo : w/ debug symbols, w/ optimization
#  MinSizeRel     : w/o debug symbols, w/ optimization, stripped binaries
#set(ROS_BUILD_TYPE RelWithDebInfo)

rosbuild_init()

#set the default path for built executables to the "bin" directory
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
#set the default path for built libraries to the "lib" directory
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

#uncomment if you have defined messages
#rosbuild_genmsg()
#uncomment if you have defined services
#rosbuild_gensrv()

#common commands for building c++ executables and libraries
#rosbuild_add_library(${PROJECT_NAME} src/example.cpp)
#target_link_libraries(${PROJECT_NAME} another_library)
#rosbuild_add_boost_directories()
#rosbuild_link_boost(${PROJECT_NAME} thread)
#rosbuild_add_executable(example examples/example.cpp)
#target_link_libraries(example ${PROJECT_NAME})


#Set the dependencies of Bayes++
rosbuild_add_boost_directories()
SET(CMAKE_CXX_FLAGS "-msse3")
#Source the files from Bayes++ and compile the library

rosbuild_add_library(BayesFilter external_libs/include/BayesFilter/bayesFlt.cpp
                external_libs/include/BayesFilter/bayesFltAlg.cpp
		external_libs/include/BayesFilter/CIFlt.cpp
		external_libs/include/BayesFilter/covFlt.cpp
		external_libs/include/BayesFilter/infFlt.cpp
		external_libs/include/BayesFilter/infRtFlt.cpp
		external_libs/include/BayesFilter/itrFlt.cpp
		external_libs/include/BayesFilter/matSup.cpp
		external_libs/include/BayesFilter/SIRFlt.cpp
		external_libs/include/BayesFilter/UDFlt.cpp
		external_libs/include/BayesFilter/UdU.cpp
		external_libs/include/BayesFilter/unsFlt.cpp
		external_libs/include/BayesFilter/bayesFlt.cpp)

