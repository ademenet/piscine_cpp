/**
 * @Author: ademenet
 * @Date:   2017-04-13T16:55:42+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-14T20:20:11+02:00
 */

 #include <algorithm>
 #include <iostream>
 #include <vector>
 #include <cstdlib>
 #include "Span.hpp"

int main(void)
{
	std::srand(time(NULL));

	std::cout << "--- Test with 10000 random values" << std::endl;
	try {
		Span sp = Span(10000);
		std::vector<int> v(10000);
	    std::generate(v.begin(), v.end(), std::rand);
		for (std::vector<int>::iterator ite = v.begin(); ite != v.end(); ite++) {
			// std::cout << *ite << std::endl;
			sp.addNumber(*ite);
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "--- Test error capacity" << std::endl;
	try {
		Span sp = Span(100);
		std::vector<int> v(10000);
		std::generate(v.begin(), v.end(), std::rand);
		for (std::vector<int>::iterator ite = v.begin(); ite != v.end(); ite++) {
			// std::cout << *ite << std::endl;
			sp.addNumber(*ite);
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "--- Test error array too short (< 2 values)" << std::endl;
	try {
		Span sp = Span(100);
		std::vector<int> v(10000);
		std::generate(v.begin(), v.end(), std::rand);
		for (std::vector<int>::iterator ite = v.begin(); ite != v.end(); ite++) {
			// std::cout << *ite << std::endl;
			// sp.addNumber(*ite);
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

}
