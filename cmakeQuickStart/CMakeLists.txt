cmake_minimum_required(VERSION 3.0.0)
project(cmakeQuickStart VERSION 0.1.0)

include(CTest)
enable_testing()

# GLOB 는 하위에서 찾는 것, GLOB_RECURSE는 하위 폴더 안에 내용도 다 찾는 것
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/sources/*.cpp
)

SET ( CMAKE_RUNTIME_OUTPUT_DIRECTORY output )

# add_executable( array_reset array_reset.c )
# add_executable( double_pointer_with문자열 double_pointer_with문자열.c )

add_executable(cmakeQuickStart ${SRC_FILES})

#target이 안붙고 그냥 include_directories 같은 거는 지양중
target_include_directories(cmakeQuickStart PUBLIC ${CMAKE_SOURCE_DIR}/includes)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
