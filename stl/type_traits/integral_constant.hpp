//
// Created by Alvin Lee on 2023/02/05.
//

#ifndef FT_CONTAINER_STL_UTILS_INTEGRAL_CONSTANT_HPP_
#define FT_CONTAINER_STL_UTILS_INTEGRAL_CONSTANT_HPP_

namespace ft {

template <class T, T v>
struct integral_constant {
  static const T value;
  typedef T value_type;
  typedef integral_constant<T,v> type;
  operator T() const { return value; }
};

template <class T, T v>
const T integral_constant<T, v>::value = v;

typedef integral_constant<bool,true> true_type;
typedef integral_constant<bool,false> false_type;

};

#endif //FT_CONTAINER_STL_UTILS_INTEGRAL_CONSTANT_HPP_
