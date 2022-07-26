cmake_minimum_required(VERSION 3.0.0)
project(C-programming VERSION 0.1.0)

include(CTest)
enable_testing()

# SET ( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/output )
SET ( CMAKE_RUNTIME_OUTPUT_DIRECTORY output )

# GLOB 는 하위에서 찾는 것, GLOB_RECURSE는 하위 폴더 안에 내용도 다 찾는 것
file(GLOB SRC_FILES CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/*.c
)

# Loop through each source file
foreach(SRC_FILES IN LISTS SRC_FILES)
    # Get the name of the file without the extension (e.g. 'a' from src/a.cpp'
    get_filename_component(target_name ${SRC_FILES} NAME_WE)
    
    # Create an executable with the above name, building the above source
    add_executable("${target_name}" "${SRC_FILES}")
endforeach()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
