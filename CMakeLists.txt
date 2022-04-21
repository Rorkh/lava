cmake_minimum_required(VERSION 3.22)
project(lava)

set(CMAKE_CXX_STANDARD 17)

add_library(lava SHARED libs/json.hpp libs/kidCurl.hpp lava/LavaExceptions.hpp LavaAPI.cpp LavaAPI.hpp lava/LavaEndpoints.hpp)

find_package (CURL)
if (CURL_FOUND)
    include_directories(${CURL_INCLUDE_DIRS})
    target_link_libraries(lava ${CURL_LIBRARIES})
else()
    MESSAGE(FATAL_ERROR "LibCurl is not found in your system.")
endif (CURL_FOUND)

if(WIN32)
    target_link_libraries(lava wsock32 ws2_32)
endif()

target_link_libraries(lava ${LIBS})