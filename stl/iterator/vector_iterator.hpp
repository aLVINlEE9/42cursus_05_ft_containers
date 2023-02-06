//
// Created by Alvin Lee on 2023/01/28.
//

#ifndef FT_CONTAINER_ITERATOR_HPP
#define FT_CONTAINER_ITERATOR_HPP

#include <iterator_base.hpp>
#include <iterator_trait.hpp>

namespace ft {

template<typename Iterator>
class _vector_iterator
	: public _iterator_base<typename iterator_traits<Iterator>::iterator_category,
							typename iterator_traits<Iterator>::value_type,
							typename iterator_traits<Iterator>::difference_type,
							typename iterator_traits<Iterator>::pointer,
							typename iterator_traits<Iterator>::reference> {
 public:
///* MEMBER_TYPE *///
  typedef typename iterator_traits<Iterator>::reference reference;
  typedef typename iterator_traits<Iterator>::pointer pointer;

  Iterator m_pointer;

  ///* MEMBER_FUNCTION *///
  /// TODO Constructor / Destructor
  ///  - Constructor ♻️
  ///  - Destructor ♻️
  ///* Constructor *///
  _vector_iterator() { m_pointer(Iterator()); }
  _vector_iterator(const Iterator &_i) { m_pointer(_i); }

  ///* Destructor *///
  ~_vector_iterator() {}

  ///* Operator *///
  /// TODO Operator
  ///  - all categories requirements ✅
  ///  - Input-Iterator requirements ✅
  ///  - Output-Iterator requirements ♻️
  ///  - Forward-Iterator requirements ♻️
  ///  - Bidirectional-Iterator requirements ♻️
  ///  - RandomAccess-Iterator requirements ♻️

  /// all categories requirements
  _vector_iterator &operator=(const _vector_iterator &rhs) {
	if (this == &rhs) {
	  return *this;
	}
	this->m_pointer = rhs.m_pointer;
	return *this;
  }

  _vector_iterator &operator++() {
	++m_pointer;
	return *this;
  }

  _vector_iterator operator++(int) {
	return _vector_iterator(m_pointer++);
  }

  /// Input-Iterator requirements
  bool operator==(const _vector_iterator &rhs) const {
	return m_pointer == rhs.m_pointer;
  }

  bool operator!=(const _vector_iterator &rhs) const {
	return m_pointer != rhs.m_pointer;
  }

  reference operator*() {
	return *m_pointer;
  }

  pointer operator->() {
	return m_pointer;
  }

  /// Output-Iterator requirements
  /// Forward-Iterator requirements
  /// Bidirectional-Iterator requirements
  _vector_iterator &operator--() {
	--m_pointer;
	return *this;
  }

  _vector_iterator operator--(int) {
	return _vector_iterator(m_pointer--);
  }

  /// RandomAccess-Iterator requirements
  _vector_iterator operator+(int n) {
	return _vector_iterator(m_pointer + n);
  }

  _vector_iterator operator-(int n) {
	return _vector_iterator(m_pointer - n);
  }

  bool operator>(const _vector_iterator &rhs) {
	return m_pointer > rhs.m_pointer;
  }

  bool operator<(const _vector_iterator &rhs) {
	return m_pointer < rhs.m_pointer;
  }

  bool operator>=(const _vector_iterator &rhs) {
	return m_pointer >= rhs.m_pointer;
  }

  bool operator<=(const _vector_iterator &rhs) {
	return m_pointer <= rhs.m_pointer;
  }

  _vector_iterator operator+=(int n) {
	m_pointer += n;
	return *this;
  }

  _vector_iterator operator-=(int n) {
	m_pointer -= n;
	return *this;
  }

  reference operator[](int idx) {
	return m_pointer[idx];
  }

  template<class InputIterator>
  typename iterator_traits<InputIterator>::difference_type
  distance(InputIterator first, InputIterator last, input_iterator_tag) {
	typename iterator_traits<InputIterator>::difference_type n = 0;
	while (first != last) {
	  ++first;
	  ++n;
	}
	return n;
  }

  template<class RandomIterator>
  typename iterator_traits<RandomIterator>::difference_type
  distance(RandomIterator first, RandomIterator last, random_access_iterator_tag) {
	typename iterator_traits<RandomIterator>::difference_type n = 0;
	return last - first;
  }

};

}
#endif //FT_CONTAINER_ITERATOR_HPP