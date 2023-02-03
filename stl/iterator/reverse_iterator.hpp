//
// Created by Alvin Lee on 2023/02/03.
//

#ifndef FT_CONTAINER_STL_ITERATOR_REVERSE_ITERATOR_HPP_
#define FT_CONTAINER_STL_ITERATOR_REVERSE_ITERATOR_HPP_

#include <iterator_trait.hpp>

namespace ft {

template<class Iterator>
class reverse_iterator {
  /* MEMBER_TYPE */
  typedef Iterator iterator_type;
  typedef iterator_traits<Iterator>::iterator_category iterator_category;
  typedef iterator_traits<Iterator>::value_type value_type;
  typedef iterator_traits<Iterator>::difference_type difference_type;
  typedef iterator_traits<Iterator>::pointer pointer;
  typedef iterator_traits<Iterator>::reference reference;
};

}

#endif //FT_CONTAINER_STL_ITERATOR_REVERSE_ITERATOR_HPP_
