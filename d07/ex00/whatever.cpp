/**
 * @Author: ademenet
 * @Date:   2017-04-12T13:20:56+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-12T14:00:26+02:00
 */

#include <iostream>

template<typename Type> void swap(Type &a, Type &b) {
	Type tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template<typename Type> Type min(Type first, Type second) {
	if (first < second)
		return first;
	else if (first == second)
		return second;
	else
		return second;
}

template<typename Type> Type max(Type first, Type second) {
	if (first > second)
		return first;
	else if (first == second)
		return second;
	else
		return second;
}

// TODO maybe need to check if same type and support comparaison operators

int main(void) {
	int a = 2;
	int b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
