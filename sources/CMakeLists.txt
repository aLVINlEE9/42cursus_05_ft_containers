add_library(ft_container_lib STATIC
        ft_container_test.cpp
        )

target_include_directories(ft_container_lib PUBLIC
#        ${CMAKE_SOURCE_DIR}/includes/const
        )

target_compile_options(ft_container_lib PRIVATE -Wall -Wextra -Werror -std=c++98 -g3)
