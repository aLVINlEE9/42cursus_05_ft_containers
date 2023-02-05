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
  typedef typename iterator_traits<Iterator>::reference reference;
  typedef typename iterator_traits<Iterator>::difference_type difference_type;
  typedef typename iterator_traits<Iterator>::pointer pointer;

  Iterator m_pointer;

///* MEMBER_FUNCTION *///
  ///* Constructor *///
  _reverse_iterator() {}

  explicit _reverse_iterator(iterator_type it) {
	m_pointer(it);
  }

  template<class Iter>
  _reverse_iterator(const _reverse_iterator<Iter> &rev_it) {
	m_pointer(rev_it.base());
  }

  iterator_type base() const {
	return m_pointer;
  }

  ///* Operator *////
  reference operator*() const {

  }
  _reverse_iterator operator+(difference_type n) const {

  }

  _reverse_iterator &operator++() {

  }

  _reverse_iterator operator++(int) {

  }

  _reverse_iterator &operator+=(difference_type n) {

  }

  _reverse_iterator operator-(difference_type n) const {

  }

  _reverse_iterator &operator--() {

  }

  _reverse_iterator operator--(int) {

  }

  _reverse_iterator &operator-=(difference_type n) {

  }

  pointer operator->() const {

  }

  reference operator[](difference_type n) const {

  }

};

template<class Iterator>
bool operator==(const _reverse_iterator<Iterator> &lhs,
				const _reverse_iterator<Iterator> &rhs);

template<class Iterator>
bool operator!=(const _reverse_iterator<Iterator> &lhs,
				const _reverse_iterator<Iterator> &rhs);

template<class Iterator>
bool operator<(const _reverse_iterator<Iterator> &lhs,
			   const _reverse_iterator<Iterator> &rhs);

template<class Iterator>
bool operator<=(const _reverse_iterator<Iterator> &lhs,
				const _reverse_iterator<Iterator> &rhs);

template<class Iterator>
bool operator>(const _reverse_iterator<Iterator> &lhs,
			   const _reverse_iterator<Iterator> &rhs);

template<class Iterator>
bool operator>=(const _reverse_iterator<Iterator> &lhs,
				const _reverse_iterator<Iterator> &rhs);
}

#endif //FT_CONTAINER_STL_ITERATOR_REVERSE_ITERATOR_HPP_
