add_library(ft_container_lib STATIC
        main.cpp
        )

target_include_directories(ft_container_lib PUBLIC
        ${CMAKE_SOURCE_DIR}/stl/iterator
        )

add_executable(ft_container main.cpp iterator/iterator.h)

target_link_libraries(ft_container PUBLIC ft_container_lib)

target_compile_options(ft_container_lib PRIVATE -Wall -Wextra -Werror -std=c++98 -g3)
