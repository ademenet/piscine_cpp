/**
 * @Author: ademenet
 * @Date:   2017-04-12T13:20:56+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-12T16:38:56+02:00
 */

#include <iostream>

template<typename Type>
void swap(Type &a, Type &b) {
	Type tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template<typename Type>
Type min(Type first, Type second) {
	if (first < second)
		return first;
	else if (first == second)
		return second;
	else
		return second;
}

template<typename Type>
Type max(Type first, Type second) {
	if (first > second)
		return first;
	else if (first == second)
		return second;
	else
		return second;
}


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

	char e = 'a';
	char f = 'b';
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;

	float g = 21.2121f;
	float h = 42.4242f;
	::swap(g, h);
	std::cout << "g = " << g << ", h = " << h << std::endl;
	std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
	std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl;

	return 0;
}
