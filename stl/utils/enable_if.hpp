//
// Created by Alvin Lee on 2023/02/05.
//

#ifndef FT_CONTAINER_STL_UTILS_ENABLE_IF_HPP_
#define FT_CONTAINER_STL_UTILS_ENABLE_IF_HPP_

namespace ft {

template<bool Cond, class T = void>
struct enable_if {};

template<typename T>
struct enable_if<true, T> {
  typedef T type;
};

}

#endif //FT_CONTAINER_STL_UTILS_ENABLE_IF_HPP_
