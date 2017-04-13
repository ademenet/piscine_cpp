/**
 * @Author: ademenet
 * @Date:   2017-04-13T14:32:36+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-13T16:54:13+02:00
 */

#include <vector>
#include <list>
#include <array>
#include <iostream>

template<typename T>
int easyfind(T container, int toFind) {
	for(typename T::iterator ite = container.begin(); ite != container.end(); ite++) {
		if (*ite == toFind)
			return *ite;
	}
	throw std::logic_error("didn't find anything");
}
