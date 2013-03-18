# - Main CMake script for QThelloWorld
#
# - Require lastest generatation of CMake
cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

# - Use the intel icl compiler
set(CMAKE_CXX_COMPILER "icl")

# - Declare the project
project(QThelloWorld CXX)

# - Add the Qt4 Package
find_package(Qt4 COMPONENTS QtCore QtGui QtOpenGL REQUIRED)
#find_package(Qt4 REQUIRED)

# - Add Qt Include directory
include(${QT_USE_FILE})

find_package(OpenGL REQUIRED)

# - Set some definitions
add_definitions(${QT_DEFINITIONS})

set(QThelloWorld_SOURCES QThelloWorld.cpp mdmainwin.cpp GLWidget.cpp)

set(QThelloWorld_HEADERS mdmainwin.h ui_mdmainwin.h GLWidget.h)

QT4_WRAP_CPP(QThelloWorld_HEADERS_MOC ${QThelloWorld_HEADERS})

# - Add the QThelloWorld executable
add_executable(QThelloWorld ${QThelloWorld_SOURCES}
	${QThelloWorld_HEADERS_MOC}
)

SET(LIBRARIES ${LIBRARIES} ${OPENGL_LIBRARIES})
 
INCLUDE_DIRECTORIES(${QT_QTOPENGL_INCLUDE_DIR} ${OPENGL_INCLUDE_DIR} )
 
# - Link QThelloWorld to the pp6maths library
target_link_libraries(QThelloWorld ${QT_LIBRARIES} ${LIBRARIES}) 
