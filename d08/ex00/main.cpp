/**
 * @Author: ademenet
 * @Date:   2017-04-13T14:32:36+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-13T16:09:37+02:00
 */

#include "easyfind.hpp"

int main() {
	// list
	// array
	// int array[4] = { 1, 2, 3, 4 };
	std::vector<int> container(4, 2);

	std::cout << easyfind< std::vector<int> >(container, 2) << std::endl;
	return 0;
}
