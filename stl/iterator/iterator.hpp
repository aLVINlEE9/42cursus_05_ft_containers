//
// Created by Alvin Lee on 2023/01/28.
//

#ifndef FT_CONTAINER_ITERATOR_HPP
#define FT_CONTAINER_ITERATOR_HPP

#include <cstddef>
#include <iterator_trait.hpp>

namespace ft {

template<class Category, class T, class Distance = ptrdiff_t,
	class Pointer = T *, class Reference = T &>
class iterator {
  /* MEMBER_TYPE */
  typedef T value_type;
  typedef Distance difference_type;
  typedef Pointer pointer;
  typedef Reference reference;
  typedef Category iterator_category;
};
}

#endif //FT_CONTAINER_ITERATOR_HPP
