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
	Iterator tmp = m_pointer;
	return *--tmp;
  }
  _reverse_iterator operator+(difference_type n) const {
	return _reverse_iterator(m_pointer + n);
  }

  _reverse_iterator &operator++() {
	--m_pointer;
	return *this;
  }

  _reverse_iterator operator++(int) {
	_reverse_iterator tmp = *this;
	--m_pointer;
	return *this;
  }

  _reverse_iterator &operator+=(difference_type n) {
	m_pointer -= n;
	return *this;
  }

  _reverse_iterator operator-(difference_type n) const {
	return _reverse_iterator(m_pointer - n);
  }

  _reverse_iterator &operator--() {
	++m_pointer;
	return *this;
  }

  _reverse_iterator operator--(int) {
	_reverse_iterator tmp = *this;
	++m_pointer;
	return *this;
  }

  _reverse_iterator &operator-=(difference_type n) {
	m_pointer += n;
	return *this;
  }

  pointer operator->() const {
	return m_pointer;
  }

  reference operator[](difference_type n) const {
	return *(*this + n);
  }

};

template<class Iterator>
typename _reverse_iterator<Iterator>::difference_type operator-(
	const _reverse_iterator<Iterator> &lhs,
	const _reverse_iterator<Iterator> &rhs) {
  return rhs.base() - lhs.base();
}

template<class Iterator>
_reverse_iterator<Iterator> operator+(
	typename _reverse_iterator<Iterator>::difference_type n,
	const _reverse_iterator<Iterator> &rev_it) {
  return reverse_iterator<Iterator>(rev_it.base() + n);
}

template<class Iterator>
bool operator==(const _reverse_iterator<Iterator> &lhs,
				const _reverse_iterator<Iterator> &rhs) {
  return lhs.base() == rhs.base();
}

template<class Iterator>
bool operator!=(const _reverse_iterator<Iterator> &lhs,
				const _reverse_iterator<Iterator> &rhs) {
  return !(lhs == rhs);
}

template<class Iterator>
bool operator<(const _reverse_iterator<Iterator> &lhs,
			   const _reverse_iterator<Iterator> &rhs) {
  return rhs.base() < lhs.base();
}

template<class Iterator>
bool operator<=(const _reverse_iterator<Iterator> &lhs,
				const _reverse_iterator<Iterator> &rhs) {
  return !(rhs < lhs);
}

template<class Iterator>
bool operator>(const _reverse_iterator<Iterator> &lhs,
			   const _reverse_iterator<Iterator> &rhs) {
  return !(rhs < lhs);
}

template<class Iterator>
bool operator>=(const _reverse_iterator<Iterator> &lhs,
				const _reverse_iterator<Iterator> &rhs) {
  return !(lhs < rhs);
}
}

#endif //FT_CONTAINER_STL_ITERATOR_REVERSE_ITERATOR_HPP_
