#
CMAKE_MINIMUM_REQUIRED (VERSION 3.5.1)

#
PROJECT(factory)

# Configuration
#
SET(CMAKE_BUILD_TYPE "debug")
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
SET(CMAKE_CXX_FLAGS "-std=c++11")

include_directories(
  src
)

add_executable(factory
  src/main.cpp
  src/product.cpp
  src/creator.cpp
)

TARGET_LINK_LIBRARIES(factory
)
