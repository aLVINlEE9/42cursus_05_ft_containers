//
// Created by Alvin Lee on 2023/01/30.
//

#ifndef FT_CONTAINER_VECTOR_HPP
#define FT_CONTAINER_VECTOR_HPP

#include <memory>
#include <uninitialized.hpp>

namespace ft {

template<class T, class Alloc>
class _vector_alloc_base {
 protected:
  typedef T value_type;
  typedef Alloc allocator_type;
  typedef size_t size_type;

  allocator_type m_allocator;
  T *m_start;
  T *m_finish;
  T *m_end_of_storage;

/* MEMBER FUNCTIONS */
  /* Constructor */
  _vector_alloc_base() {}
  _vector_alloc_base(allocator_type &) {
	m_start(0);
	m_finish(0);
	m_end_of_storage(0);
  }

  /* Destructor */
  ~_vector_alloc_base() {
  }

  /* Allocator */
  //  - allocator_type get_allocator() const ✅
  allocator_type get_allocator() const { return m_allocator; }
};

template<class T, class Alloc>
class _vector_base : protected _vector_alloc_base<T, Alloc> {
 private:
  typedef _vector_alloc_base<T, Alloc> _base;

 protected:
  using _base::m_allocator;
  using _base::m_start;
  using _base::m_finish;
  using _base::m_end_of_storage;

  /* MEMBER_TYPE */
  typedef typename _base::value_type value_type;
  typedef typename _base::allocator_type allocator_type;
  typedef value_type &reference;
  typedef const value_type &const_reference;
  typedef value_type *pointer;
  typedef const value_type *const_pointer;
  typedef ptrdiff_t difference_type;
  typedef typename _base::size_type size_type;


/* MEMBER FUNCTIONS */
  /* Constructor */
  _vector_base() {}
  _vector_base(allocator_type &alloc) : _base(alloc) {}
  _vector_base(size_type n, allocator_type &alloc) : _base(alloc) {
	m_start = m_finish = m_allocator.allocate(n);
	m_end_of_storage = m_start + n;
  }

  /* Destructor */
  ~_vector_base() {
	if (m_start) allocator_type::deallocate(m_start, m_end_of_storage - m_start);
  }
  // utils
};

// generic template
template<class T, class Alloc = std::allocator<T> >
class vector : protected _vector_base<T, Alloc> {
 private:
  typedef _vector_base<T, Alloc> _base;

 public:
/* MEMBER_TYPE */
  typedef typename _base::value_type value_type;
  typedef typename _base::allocator_type allocator_type;
  typedef typename _base::reference reference;
  typedef typename _base::const_reference const_reference;
  typedef typename _base::pointer pointer;
  typedef typename _base::const_pointer const_pointer;

  // TODO iterators implement
  //  - iterator ❎
  //  - const_iterator ❎
  //  - reverse_iterator ❎
  //  - const_reverse_iterator ❎
  /*
   typedef iterator iterator;
   typedef const_iterator const_iterator;
   typedef reverse_iterator reverse_iterator;
   typedef const_reverse_iterator const_reverse_iterator;
   */

  typedef typename _base::difference_type difference_type;
  typedef typename _base::size_type size_type;

/* MEMBER FUNCTIONS */
  /* Constructor */

  // TODO Vector Constructor / Destructor implement
  //  - default constructor ✅
  //  - fill constructor ✅
  //  - range constructor ❎
  //  - copy constructor ❎
  //  - destructor ❎
  // Constructs an empty container, with no elements.
  explicit vector(const allocator_type &alloc = allocator_type()) : _base(alloc) {}

  // Constructs a container with n elements. Each element is a copy of val.
  explicit vector(size_type n, const value_type &val = value_type(),
				  const allocator_type &alloc = allocator_type()) : _base(n, alloc) {
	uninitialized_fill_n(n, val);
  }

  // Constructs a container with as many elements as the range [first,last),
  // with each element constructed from its corresponding element in that range, in the same order.
  template<class InputIterator>
  vector(InputIterator first, InputIterator last,
		 const allocator_type &alloc = allocator_type());

  // Constructs a container with a copy of each of the elements in x, in the same order.
  vector(const vector &x);

  /* Destructor */
  // This destroys all container elements, and deallocates all the storage capacity
  // allocated by the vector using its allocator.
  ~vector();


  /* Operator */
  // Copies all the elements from x into the container.
  // The container preserves its current allocator, which is used to allocate storage in case of reallocation.
  vector &operator=(const vector &x);

  /* Iterators */

  // TODO Member Function implement
  //  - iterator begin(); ❎
  //  - const_iterator begin() const; ❎
  //  - iterator end(); ❎
  //  - const_iterator end() const; ❎
  //  - reverse_iterator rbegin(); ❎
  //  - const_reverse_iterator rbegin() const; ❎
  //  - reverse_iterator rend(); ❎
  //  - const_reverse_iterator rend() const; ❎

  /*
   iterator begin();

   const_iterator begin() const;

   iterator end();

   const_iterator end() const;

   reverse_iterator rbegin();

   const_reverse_iterator rbegin() const;

   reverse_iterator rend();

   const_reverse_iterator rend() const;
  */


  /* Capacity */
  // TODO Capacity Member Function implement
  //  - size() ❎
  //  - max_size() ❎
  //  - resize() ❎
  //  - capacity() ❎
  //  - empty() ❎
  //  - reverse() ❎
  size_type size() const;

  size_type max_size() const;

  void resize(size_type n, value_type val = value_type());

  size_type capacity() const;

  bool empty() const;

  void reserve(size_type n);

  /* Element Access */

  // TODO Element Access Function implement
  //  - reference operator[](size_type n) ❎
  //  - const_reference operator[](size_type n) const ❎
  //  - reference at(size_type n) ❎
  //  - const_reference at(size_type n) const ❎
  //  - reference front() ❎
  //  - const_reference front() const ❎
  //  - reference back() ❎
  //  - const_reference back() const ❎

  reference operator[](size_type n);

  const_reference operator[](size_type n) const;

  reference at(size_type n);

  const_reference at(size_type n) const;

  reference front();

  const_reference front() const;

  reference back();

  const_reference back() const;


  /* Modifiers */
  // TODO Modifier Function implement
  //  - template<class InputIterator>
  //  void assign(InputIterator first, InputIterator last) ❎
  //  - void assign(size_type n, const value_type &val) ❎
  //  - void push_back(const value_type &val) ❎
  //  - void pop_back() ❎
  //  - iterator insert(iterator position, const value_type &val) ❎
  //  - void insert(iterator position, size_type n, const value_type &val) ❎
  //  - template<class InputIterator>
  //  void insert(iterator position, InputIterator first, InputIterator last) ❎
  //  - iterator erase(iterator position) ❎
  //  - iterator erase(iterator first, iterator last) ❎
  //  - void swap(vector &x) ❎
  //  - void clear() ❎
  /*
	// the new contents are elements constructed from each of the elements
	// in the range between first and last, in the same order.
    template<class InputIterator>
    void assign(InputIterator first, InputIterator last);

	// the new contents are n elements, each initialized to a copy of val.
	void assign(size_type n, const value_type &val);

	void push_back(const value_type &val);

	void pop_back();

	iterator insert(iterator position, const value_type &val);

	void insert(iterator position, size_type n, const value_type &val);

	template<class InputIterator>
	void insert(iterator position, InputIterator first, InputIterator last);

	iterator erase(iterator position);

	iterator erase(iterator first, iterator last);

	void swap(vector &x);

	void clear();
   */


  /* Allocator */

  // TODO Allocator function implement
  //  - allocator_type get_allocator() const ❎
  allocator_type get_allocator() const;
};

/* NON-MEMBER FUNCTION OVERLOADS */

// TODO NON-MEMBER FUNCTION OVERLOADS implement
//  - template<class T, class Alloc>
//	  bool operator==(const vector<T, Alloc> &lhs, const vector<T, Alloc> &rhs) ❎
//  - template<class T, class Alloc>
//	  bool operator!=(const vector<T, Alloc> &lhs, const vector<T, Alloc> &rhs) ❎
//  - template<class T, class Alloc>
//    bool operator<(const vector<T, Alloc> &lhs, const vector<T, Alloc> &rhs) ❎
//  - template<class T, class Alloc>
//    bool operator<=(const vector<T, Alloc> &lhs, const vector<T, Alloc> &rhs) ❎
//  - template<class T, class Alloc>
//    bool operator>(const vector<T, Alloc> &lhs, const vector<T, Alloc> &rhs) ❎
//  - template<class T, class Alloc>
//    bool operator>=(const vector<T, Alloc> &lhs, const vector<T, Alloc> &rhs) ❎
//  - template<class T, class Alloc>
//    void swap(vector<T, Alloc> &x, vector<T, Alloc> &y) ❎

template<class T, class Alloc>
bool operator==(const vector<T, Alloc> &lhs, const vector<T, Alloc> &rhs);

template<class T, class Alloc>
bool operator!=(const vector<T, Alloc> &lhs, const vector<T, Alloc> &rhs);

template<class T, class Alloc>
bool operator<(const vector<T, Alloc> &lhs, const vector<T, Alloc> &rhs);

template<class T, class Alloc>
bool operator<=(const vector<T, Alloc> &lhs, const vector<T, Alloc> &rhs);

template<class T, class Alloc>
bool operator>(const vector<T, Alloc> &lhs, const vector<T, Alloc> &rhs);

template<class T, class Alloc>
bool operator>=(const vector<T, Alloc> &lhs, const vector<T, Alloc> &rhs);

template<class T, class Alloc>
void swap(vector<T, Alloc> &x, vector<T, Alloc> &y);

/* Template specializations */

// bool specialization

// TODO Template specializations implement
//  - template<class Alloc>
//	  class vector<bool, Alloc> ❎
template<class Alloc>
class vector<bool, Alloc>;

}

#endif //FT_CONTAINER_VECTOR_HPP
