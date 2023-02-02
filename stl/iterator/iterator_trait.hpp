//
// Created by Alvin Lee on 2023/02/02.
//

#ifndef FT_CONTAINER_STL_ITERATOR_ITERATOR_TRAIT_HPP_
#define FT_CONTAINER_STL_ITERATOR_ITERATOR_TRAIT_HPP_

#include <cstddef>

namespace ft {

// Empty classes to identify the category of an iterators
struct input_iterator_tag {};
struct forward_iterator_tag {};
struct bidirectional_iterator_tag {};
struct random_access_iterator_tag {};
struct output_iterator_tag {};

// generic definition
template<class Iterator>
class iterator_traits {
  typedef typename Iterator::difference_type difference_type;
  typedef typename Iterator::value_type value_type;
  typedef typename Iterator::pointer pointer;
  typedef typename Iterator::reference reference;
  typedef typename Iterator::iterator_category iterator_category;
};

// T* specialization
template<class T>
class iterator_traits<T *> {
  typedef ptrdiff_t difference_type;
  typedef T value_type;
  typedef T *pointer;
  typedef T &reference;
  typedef random_access_iterator_tag iterator_category;
};

// const T* specialization
template<class T>
class iterator_traits<const T *> {
  typedef ptrdiff_t difference_type;
  typedef T value_type;
  typedef const T *pointer;
  typedef const T &reference;
  typedef random_access_iterator_tag iterator_category;
};

}

#endif //FT_CONTAINER_STL_ITERATOR_ITERATOR_TRAIT_HPP_
