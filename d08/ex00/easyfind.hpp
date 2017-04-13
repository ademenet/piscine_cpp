/**
 * @Author: ademenet
 * @Date:   2017-04-13T14:32:36+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-13T16:08:02+02:00
 */

#include <vector>
#include <iostream>

template<typename T>
int easyfind(T container, int toFind) {
	for(typename T::iterator ite = container.begin(); ite != container.end(); ite++) { // maybe ++ite
		if (*ite == toFind)
			return *ite;
	}
	throw std::exception();
}
