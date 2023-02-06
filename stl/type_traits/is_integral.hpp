//
// Created by Alvin Lee on 2023/02/05.
//

#ifndef FT_CONTAINER_STL_UTILS_IS_INTEGRAL_HPP_
#define FT_CONTAINER_STL_UTILS_IS_INTEGRAL_HPP_

#include "integral_constant.hpp"

namespace ft {

template<typename T>
struct is_integral : public integral_constant<bool, false> {};

template<>
struct is_integral<bool> : public integral_constant<bool, true> {};

template<>
struct is_integral<char> : public integral_constant<bool, true> {};

template<>
struct is_integral<signed char> : public integral_constant<bool, true> {};

template<>
struct is_integral<unsigned char> : public integral_constant<bool, true> {};

template<>
struct is_integral<wchar_t> : public integral_constant<bool, true> {};

template<>
struct is_integral<short> : public integral_constant<bool, true> {};

template<>
struct is_integral<unsigned short> : public integral_constant<bool, true> {};

template<>
struct is_integral<int> : public integral_constant<bool, true> {};

template<>
struct is_integral<unsigned int> : public integral_constant<bool, true> {};

template<>
struct is_integral<long> : public integral_constant<bool, true> {};

template<>
struct is_integral<unsigned long> : public integral_constant<bool, true> {};

template<>
struct is_integral<long long> : public integral_constant<bool, true> {};

template<>
struct is_integral<unsigned long long> : public integral_constant<bool, true> {};

}

#endif //FT_CONTAINER_STL_UTILS_IS_INTEGRAL_HPP_
