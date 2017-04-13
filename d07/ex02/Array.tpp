/**
 * @Author: ademenet
 * @Date:   2017-04-12T18:01:32+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-13T14:27:43+02:00
 */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

/* Template definition */
template<typename T>
class Array {

public:
    Array(void);
	Array(unsigned int n);
    Array(Array <T> &);
    ~Array(void);
    Array<T> &operator=(Array <T> const &);
	T &operator[](unsigned int index);

	unsigned int size() const;

private:
	T 				*array;
	unsigned int	len;
};

/* Template declaration */
template <typename T>
Array<T>::Array() {
	array = new T();
	len = 1;
}

template <typename T>
Array<T>::Array(unsigned int n) {
	array = new T[n];
	len = n;
}

template <typename T>
Array<T>::Array(Array <T> &src) {
	*this = src;
	return this;
}

template <typename T>
Array<T>::~Array(){
	if (array != NULL) {
		if (len == 1) {
			delete array;
		}
		else {
			delete [] array;
		}
	}
}

template <typename T>
Array<T> &Array<T>::operator=(Array <T> const &rhs) {
	if (this != &rhs) {
		len = rhs.len;
		for (unsigned int i = 0; i < len; i++) {
			array[i] = rhs.array[i];
		}
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int index) {
	if (index >= len) {
		throw std::out_of_range("out of range");
	}
	return array[index];
}

template <typename T>
unsigned int Array<T>::size() const {
	return len;
}

#endif
