/**
 * @Author: ademenet
 * @Date:   2017-04-13T14:32:36+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-13T16:54:33+02:00
 */

#include "easyfind.hpp"

int main() {
	std::cout << "--- Test with vectors" << std::endl;
	std::vector<int> vec(4);
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	try {
		std::cout << "- Good" << std::endl;
		std::cout << easyfind< std::vector<int> >(vec, 20) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	try {
		std::cout << "- Error" << std::endl;
		std::cout << easyfind< std::vector<int> >(vec, 2) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "--- Test with list" << std::endl;
	std::list<int> lst(4);
	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);
	lst.push_back(40);
	try {
		std::cout << "- Good" << std::endl;
		std::cout << easyfind< std::list<int> >(lst, 20) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	try {
		std::cout << "- Error" << std::endl;
		std::cout << easyfind< std::list<int> >(lst, 2) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "--- Test with array" << std::endl;
	std::array<int, 4> arr;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	try {
		std::cout << "- Good" << std::endl;
		std::cout << easyfind< std::array<int, 4> >(arr, 20) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	try {
		std::cout << "- Error" << std::endl;
		std::cout << easyfind< std::array<int, 4> >(arr, 2) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}
