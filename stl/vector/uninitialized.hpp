//
// Created by Alvin Lee on 2023/02/03.
//

#ifndef FT_CONTAINER_STL_VECTOR_UNINITIALIZED_HPP_
#define FT_CONTAINER_STL_VECTOR_UNINITIALIZED_HPP_

#include <iterator_trait.hpp>

namespace ft {

/// TODO uninitialized implement
///  - uninitialized_fill_n() ♻️
///  - uninitialized_fill() ❎
///  - uninitialized_copy_n() ❎
///  - uninitialized_copy() ❎

template<class ForwardIterator, class Size, class T>
void uninitialized_fill_n(ForwardIterator first, Size n, const T &x) {
  for (; n--; ++first)
	new (static_cast<void *>(&*first))
		typename iterator_traits<ForwardIterator>::value_type(x);
}

template<class ForwardIterator, class T>
void uninitialized_fill(ForwardIterator first, ForwardIterator last, const T &x);

template<class InputIterator, class Size, class ForwardIterator>
ForwardIterator uninitialized_copy_n(InputIterator first, Size n, ForwardIterator result);

template<class InputIterator, class ForwardIterator>
ForwardIterator uninitialized_copy(InputIterator first, InputIterator last, ForwardIterator result);

}

#endif //FT_CONTAINER_STL_VECTOR_UNINITIALIZED_HPP_
