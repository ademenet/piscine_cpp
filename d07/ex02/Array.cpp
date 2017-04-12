/**
 * @Author: ademenet
 * @Date:   2017-04-12T18:02:05+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-12T19:19:25+02:00
 */

#include "Array.hpp"

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
Array<T>::Array(Array <T> &) {
}

template <class T>
Array<T>::~Array(){
}

template <class T>
Array<T> &Array<T>::operator=(Array <T> const &) {
}


int main(void) {
	/* code */
	return 0;
}
