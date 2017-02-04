###
#  @file CMakeLists.txt
#  @brief CMAKE setting for Google test
#  @author ngmrsng
#  @date 2016/08/08
###
 
cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project (SoftwareTimerSample)

################################################################
set(MyApp_include
#	interface/Control/I_Control.h
#	interface/Timer/I_Timer.h
)

set(MyApp_header
	src/Control/U_Control.h
	src/Timer/U_Timer.h
)

set(MyApp_src
	src/Control/U_Control.cpp
	src/Timer/U_Timer.cpp
)

add_executable(SoftwareTimerSample
	src/main.cpp
	${MyApp_include}
	${MyApp_header}
	${MyApp_src}
)

################################################################
option(ENABLE_GTEST "Use gtest." OFF)

# set unit test enable
set(ENABLE_GTEST OFF)
message (STATUS "ENABLE_GTEST=${ENABLE_GTEST}")

if(ENABLE_GTEST)
message(STATUS "start Google Test!")
add_subdirectory(test)
add_subdirectory(tools/googletest)
endif()

################################################################
include_directories(SoftwareTimerSample
PUBLIC
	include/Control
	include/Timer
PRIVATE
	src/Control
	src/Timer
)

#target_link_library(SoftwareTimerSample)
