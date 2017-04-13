/**
 * @Author: ademenet
 * @Date:   2017-04-12T18:02:05+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-13T11:59:06+02:00
 */

#include "Array.hpp"

/* Template declaration */
template <class T>
Array<T>::Array() {
	array = new T;
	len = 1;
}

template <class T>
Array<T>::Array(unsigned int n) {
	array = new T(n);
	len = n;
}

template <class T>
Array<T>::Array(Array <T> &src) {
	*this = src;
	return this;
}

template <class T>
Array<T>::~Array(){
	if (array != NULL) {
		delete [] array;
	}
}

template <class T>
Array<T> &Array<T>::operator=(Array <T> const &rhs) {
	if (this != &rhs) {
		len = rhs.len;
		for (unsigned int i = 0; i < len; i++) {
			std::cout << rhs << std::endl;
			array[i] = rhs.array[i];
		}
	}
	return *this;
}

template <class T>
T &Array<T>::operator[](unsigned int index) {
	if (index >= len) {
		throw std::exception();
	}
	return array[index];
}

template <class T>
unsigned int Array<T>::size() const {
	return len;
}

/* Test main */
int main(void) {
	int len;

	std::cout << "---- Test with int" << std::endl;
	len = 3;
	try {
		Array<int> arrayIntSimple;
		arrayIntSimple[0] = 10;
		std::cout << "-- Test size: " << arrayIntSimple.size() << std::endl;
		for (unsigned int i = 0; i < arrayIntSimple.size(); i++) {
			std::cout << "- Test [" << i << "]: " << arrayIntSimple[i] << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "---- Test with int" << std::endl;
	len = 3;
	try {
		Array<int> arrayIntSimple(len);
		arrayIntSimple[0] = 10;
		arrayIntSimple[1] = 20;
		arrayIntSimple[2] = 30;
		std::cout << "-- Test size: " << arrayIntSimple.size() << std::endl;
		for (unsigned int i = 0; i < arrayIntSimple.size(); i++) {
			std::cout << "- Test [" << i << "]: " << arrayIntSimple[i] << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "---- Test error with int" << std::endl;
	len = 3;
	try {
		Array<int> arrayIntSimple(len);
		arrayIntSimple[0] = 10;
		arrayIntSimple[1] = 20;
		arrayIntSimple[2] = 30;
		arrayIntSimple[3] = 40;
		std::cout << "-- Test size: " << arrayIntSimple.size() << std::endl;
		for (unsigned int i = 0; i < arrayIntSimple.size(); i++) {
			std::cout << "- Test [" << i << "]: " << arrayIntSimple[i] << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "---- Test with char" << std::endl;
	len = 3;
	try {
		Array<char> arrayCharSimple;
		arrayCharSimple[0] = 'z';
		std::cout << "-- Test size: " << arrayCharSimple.size() << std::endl;
		for (unsigned int i = 0; i < arrayCharSimple.size(); i++) {
			std::cout << "- Test [" << i << "]: " << arrayCharSimple[i] << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "---- Test with char" << std::endl;
	len = 3;
	try {
		Array<char> arrayCharSimple(len);
		arrayCharSimple[0] = 'd';
		arrayCharSimple[1] = 'e';
		arrayCharSimple[2] = 'f';
		std::cout << "-- Test size: " << arrayCharSimple.size() << std::endl;
		for (unsigned int i = 0; i < arrayCharSimple.size(); i++) {
			std::cout << "- Test [" << i << "]: " << arrayCharSimple[i] << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "---- Test error with char" << std::endl;
	len = 3;
	try {
		Array<int> arrayCharSimple(len);
		arrayCharSimple[0] = 'd';
		arrayCharSimple[1] = 'e';
		arrayCharSimple[2] = 'f';
		arrayCharSimple[3] = 'g';
		std::cout << "-- Test size: " << arrayCharSimple.size() << std::endl;
		for (unsigned int i = 0; i < arrayCharSimple.size(); i++) {
			std::cout << "- Test [" << i << "]: " << arrayCharSimple[i] << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
