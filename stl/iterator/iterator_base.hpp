//
// Created by Alvin Lee on 2023/02/04.
//

#ifndef FT_CONTAINER_STL_ITERATOR_ITERATOR_BASE_HPP_
#define FT_CONTAINER_STL_ITERATOR_ITERATOR_BASE_HPP_

#include <cstddef>

namespace ft {

template<class Category, class T, class Distance = ptrdiff_t,
	class Pointer = T *, class Reference = T &>
class _iterator_base {
  ///* MEMBER_TYPE *///
  typedef T value_type;
  typedef Distance difference_type;
  typedef Pointer pointer;
  typedef Reference reference;
  typedef Category iterator_category;
};
}

#endif //FT_CONTAINER_STL_ITERATOR_ITERATOR_BASE_HPP_
