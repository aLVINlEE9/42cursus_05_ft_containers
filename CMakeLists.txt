cmake_minimum_required(VERSION 3.23)

# set the project name and version
project(ft_container VERSION 0.1)

# 라이브러리 파일은 빌드 디렉토리 안에 lib 폴더에 출력.
# CMAKE_BINARY_DIR -> build
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY})

add_subdirectory(stl)
add_subdirectory(test)
