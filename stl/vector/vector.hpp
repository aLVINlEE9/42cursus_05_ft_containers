//
// Created by Alvin Lee on 2023/01/30.
//

#ifndef FT_CONTAINER_VECTOR_HPP
#define FT_CONTAINER_VECTOR_HPP

#include <memory>

namespace ft {

template<class T, class Alloc>
class __vector_base : {
 protected:
  typedef T value_type;
  typedef value_type &reference;
  typedef const value_type &const_reference;
  typedef value_type *pointer;
  typedef const value_type *const_pointer;
  typedef ptrdiff_t difference_type;
  typedef size_t size_type;
};

// generic template
template<class T, class Alloc = std::allocator<T> >
class vector : protected __vector_base<T, Alloc> {
 private:
  typedef __vector_base<T, Alloc> __base;

 public:
  typedef T value_type;
  typedef __base::reference reference;
  typedef __base::const_reference const_reference;
  typedef __base::pointer pointer;
  typedef __base::const_pointer const_pointer;
  // Todo: iterator, const_iterator, reverse_iterator, const_reverse_iterator
  /*
   typedef iterator iterator;
   typedef const_iterator const_iterator;
   typedef reverse_iterator reverse_iterator;
   typedef const_reverse_iterator const_reverse_iterator;
   */
  typedef __base::difference_type difference_type;
  typedef __base::size_type size_type;
};
}

#endif //FT_CONTAINER_VECTOR_HPP
