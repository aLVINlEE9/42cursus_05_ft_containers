include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.12.0
)

FetchContent_MakeAvailable(googletest)

add_executable(ft_container_test
        main.cpp
        iterator_test.cpp)

target_compile_options(ft_container_test PRIVATE -std=c++11)

target_link_libraries(ft_container_test PRIVATE ft_container_lib gtest gmock gtest_main)