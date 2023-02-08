add_library(ft_container_lib STATIC
        main.cpp
        )

target_include_directories(ft_container_lib PUBLIC
        ${CMAKE_SOURCE_DIR}/stl/iterator
        ${CMAKE_SOURCE_DIR}/stl/memory
        ${CMAKE_SOURCE_DIR}/stl/type_traits
        ${CMAKE_SOURCE_DIR}/stl/vector
        )

add_executable(ft_container
        main.cpp
        iterator/iterator_base.hpp
        iterator/iterator_trait.hpp
        iterator/vector_iterator.hpp
        iterator/reverse_iterator.hpp
        memory/uninitialized.hpp
        type_traits/enable_if.hpp
        type_traits/integral_constant.hpp
        type_traits/is_integral.hpp
        type_traits/type_traits.hpp
        vector/vector.hpp)

target_link_libraries(ft_container PUBLIC ft_container_lib)

target_compile_options(ft_container_lib PRIVATE -g3)

