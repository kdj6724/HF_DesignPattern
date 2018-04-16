#
CMAKE_MINIMUM_REQUIRED (VERSION 3.5.1)

#
PROJECT(template)

# Configuration
#
SET(CMAKE_BUILD_TYPE "debug")
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
SET(CMAKE_CXX_FLAGS "-std=c++11")

include_directories(
  src
)

add_executable(template
  src/main.cpp
  src/beverage.cpp
)

TARGET_LINK_LIBRARIES(template
)
