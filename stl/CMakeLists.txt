add_library(ft_container_lib STATIC
        main.cpp
        )

target_include_directories(ft_container_lib PUBLIC
        ${CMAKE_SOURCE_DIR}/stl/test
        )

add_executable(ft_container main.cpp test/container.h)
