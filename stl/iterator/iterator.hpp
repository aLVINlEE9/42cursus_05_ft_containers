//
// Created by Alvin Lee on 2023/01/28.
//

#ifndef FT_CONTAINER_ITERATOR_HPP
#define FT_CONTAINER_ITERATOR_HPP

#include <iterator_base.hpp>
#include <iterator_trait.hpp>

namespace ft {

template<typename Iterator>
class _iterator
	: public _iterator_base<typename iterator_traits<Iterator>::iterator_category,
							typename iterator_traits<Iterator>::value_type,
							typename iterator_traits<Iterator>::difference_type,
							typename iterator_traits<Iterator>::pointer,
							typename iterator_traits<Iterator>::reference> {
 public:
/* MEMBER_FUNCTION */
  _iterator() {}
  ~_iterator() {}
};
}
#endif //FT_CONTAINER_ITERATOR_HPP