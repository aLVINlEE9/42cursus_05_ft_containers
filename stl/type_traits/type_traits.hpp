//
// Created by Alvin Lee on 2023/02/06.
//

#ifndef FT_CONTAINER_STL_TYPE_TRAITS_TYPE_TRAITS_HPP_
#define FT_CONTAINER_STL_TYPE_TRAITS_TYPE_TRAITS_HPP_

#include <integral_constant.hpp>

namespace ft {

template<class T>
struct type_traits {
  typedef false_type is_pod;
};

// Provide some specializations.

template<>
struct type_traits<bool> {
  typedef true_type is_pod;
};

template<>
struct type_traits<char> {
  typedef true_type is_pod;
};

template<>
struct type_traits<signed char> {
  typedef true_type is_pod;
};

template<>
struct type_traits<unsigned char> {
  typedef true_type is_pod;
};

template<>
struct type_traits<wchar_t> {
  typedef true_type is_pod;
};

template<>
struct type_traits<short> {
  typedef true_type is_pod;
};

template<>
struct type_traits<unsigned short> {
  typedef true_type is_pod;
};

template<>
struct type_traits<int> {
  typedef true_type is_pod;
};

template<>
struct type_traits<unsigned int> {
  typedef true_type is_pod;
};

template<>
struct type_traits<long> {
  typedef true_type is_pod;
};

template<>
struct type_traits<unsigned long> {
  typedef true_type is_pod;
};

template<>
struct type_traits<long long> {
  typedef true_type is_pod;
};

template<>
struct type_traits<unsigned long long> {
  typedef true_type is_pod;
};

template<>
struct type_traits<float> {
  typedef true_type is_pod;
};

template<>
struct type_traits<double> {
  typedef true_type is_pod;
};

template<>
struct type_traits<long double> {
  typedef true_type is_pod;
};

template<class _Tp>
struct type_traits<_Tp *> {
  typedef true_type is_pod;
};

}

#endif //FT_CONTAINER_STL_TYPE_TRAITS_TYPE_TRAITS_HPP_
