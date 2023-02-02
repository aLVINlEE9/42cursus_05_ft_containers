add_library(ft_container_lib STATIC
        main.cpp
        )

target_include_directories(ft_container_lib PUBLIC
        ${CMAKE_SOURCE_DIR}/stl/iterator
        ${CMAKE_SOURCE_DIR}/stl/vector
        )

add_executable(ft_container main.cpp iterator/iterator.hpp vector/vector.hpp iterator/iterator_trait.hpp)

target_link_libraries(ft_container PUBLIC ft_container_lib)

target_compile_options(ft_container_lib PRIVATE -Wall -Wextra -Werror -std=c++98 -g3)
