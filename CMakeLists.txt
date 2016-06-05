cmake_minimum_required(VERSION 2.8)
project(dds_chatter)

#ADD_SUBDIRECTORY(src)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

include (MacroOpenSplice)
include (osmacros)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include)

#find_package(opensplice REQUIRED)
find_package (OpenSplice REQUIRED)

include_directories(cpp ${OpenSplice_INCLUDE_DIRS})
link_directories(${OpenSplice_LIBRARIES} ${PROJECT_SOURCE_DIR}/lib)

OpenSplice_IDLGEN(idl/Chat.idl idl/Chat2.idl)

add_definitions (
 ${OpenSplice_DEFINITIONS}
 ${DEFINITIONS}
)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib) 

add_executable(chatter src/Chatter.cpp src/CheckStatus.cpp)
target_link_libraries(chatter 
    ${DATAMODEL} 
    ${OpenSplice_LIBRARIES}
    ${PROJECT_SOURCE_DIR}/lib/libsacpp_tutorial_types.so
    -lpthread
)

add_executable(messageboard src/MessageBoard.cpp src/multitopic.cpp src/CheckStatus.cpp)
target_link_libraries(messageboard 
    ${DATAMODEL} 
    ${OpenSplice_LIBRARIES}
    ${PROJECT_SOURCE_DIR}/lib/libsacpp_tutorial_types.so
    -lpthread
)

add_executable(userload src/UserLoad.cpp src/CheckStatus.cpp)
target_link_libraries(userload 
    ${DATAMODEL} 
    ${OpenSplice_LIBRARIES}
    ${PROJECT_SOURCE_DIR}/lib/libsacpp_tutorial_types.so
    -lpthread
)

add_executable(discovery src/Discovery.cpp src/CheckStatus.cpp)
target_link_libraries(discovery 
    ${DATAMODEL} 
    ${OpenSplice_LIBRARIES}
    -lpthread
)
