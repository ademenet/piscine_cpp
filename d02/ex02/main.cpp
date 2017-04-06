#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c(42);
	Fixed const d(42);

	std::cout << "-- Variables" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;

	std::cout << "-- Boolean operators" << std::endl;
	std::cout << "(c < 0): " << (c < 0) << std::endl;
	std::cout << "(c > 0): " << (c > 0) << std::endl;
	std::cout << "(c <= 0): " << (c <= 0) << std::endl;
	std::cout << "(c >= 0): " << (c >= 0) << std::endl;
	std::cout << "(c == 0): " << (c == 0) << std::endl;
	std::cout << "(c != 0): " << (c != 0) << std::endl;

	std::cout << "(d < 0): " << (d < 0) << std::endl;
	std::cout << "(d > 0): " << (d > 0) << std::endl;
	std::cout << "(d <= 0): " << (d <= 0) << std::endl;
	std::cout << "(d >= 0): " << (d >= 0) << std::endl;
	std::cout << "(d == 0): " << (d == 0) << std::endl;
	std::cout << "(d != 0): " << (d != 0) << std::endl;

	std::cout << "-- Arithmetic operators" << std::endl;
	std::cout << "a + 3: " << a + 3 << std::endl;
	std::cout << "a - 10000: " << a - 10000 << std::endl;
	std::cout << "a * 2: " << a * 2 << std::endl;
	std::cout << "a * a: " << a * a << std::endl;
	std::cout << "b * b: " << b * b << std::endl;
	std::cout << "a * b: " << a * b << std::endl;
	std::cout << "c * b: " << c * b << std::endl;
	std::cout << "b * d: " << b * d << std::endl;
	std::cout << "b / d: " << b / d << std::endl;
	std::cout << "a / d: " << a / d << std::endl;
	std::cout << "a / 0: " << a / 0 << std::endl;

	std::cout << "-- Min/Max" << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(c, b) << std::endl;

	std::cout << "-- ++/--" << std::endl;
	std::cout << a << std::endl;
	a++;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	a--;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;

	return 0;
}
