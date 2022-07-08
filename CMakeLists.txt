cmake_minimum_required (VERSION 3.16)

set( CMAKE_CXX_FLAGS "-std=c++2a" )

project(spring)

MESSAGE(STATUS ${PROJECT_SOURCE_DIR})

include_directories(
    ${PROJECT_SOURCE_DIR}/dependcy/
    ${PROJECT_SOURCE_DIR}/math/vector/
    ${PROJECT_SOURCE_DIR}/render/brush/
    ${PROJECT_SOURCE_DIR}/render/model/
)

aux_source_directory (${PROJECT_SOURCE_DIR}/dependcy DEPENDCY_SRC_LIST)
aux_source_directory (${PROJECT_SOURCE_DIR}/render/brush/ RENDER_SRC_LIST)
aux_source_directory (${PROJECT_SOURCE_DIR}/render/model/ MODEL_SRC_LIST)

add_executable(${PROJECT_NAME} main.cpp ${DEPENDCY_SRC_LIST} ${MATH_SRC_LIST} ${RENDER_SRC_LIST} ${MODEL_SRC_LIST})

