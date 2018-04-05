#
CMAKE_MINIMUM_REQUIRED (VERSION 3.5.1)

#
PROJECT(weather_data)

# Configuration
#

SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
SET(CMAKE_CXX_FLAGS "-std=c++11 -g")

include_directories(
  src
)

add_executable(weather_data
  src/main.cpp
  src/observer.cpp
  src/weather_data.cpp
)

TARGET_LINK_LIBRARIES(weather_data
)
