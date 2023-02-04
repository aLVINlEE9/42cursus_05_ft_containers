//
// Created by Alvin Lee on 2023/02/03.
//

#ifndef FT_CONTAINER_STL_ITERATOR_REVERSE_ITERATOR_HPP_
#define FT_CONTAINER_STL_ITERATOR_REVERSE_ITERATOR_HPP_

#include <iterator_base.hpp>
#include <iterator_trait.hpp>

namespace ft {

template<typename Iterator>
class _reverse_iterator
	: public _iterator_base<typename iterator_traits<Iterator>::iterator_category,
							typename iterator_traits<Iterator>::value_type,
							typename iterator_traits<Iterator>::difference_type,
							typename iterator_traits<Iterator>::pointer,
							typename iterator_traits<Iterator>::reference> {
 public:
///* MEMBER_TYPE *///
  typedef Iterator iterator_type;

///* MEMBER_FUNCTION *///
  _reverse_iterator() {}
  ~_reverse_iterator() {}
};
}

#endif //FT_CONTAINER_STL_ITERATOR_REVERSE_ITERATOR_HPP_
