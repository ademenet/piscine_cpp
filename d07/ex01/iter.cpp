/**
 * @Author: ademenet
 * @Date:   2017-04-12T16:27:07+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-12T17:28:23+02:00
 */

#include <iostream>

template<typename T>
void iter(T *adr, size_t length, void (*fn)(T &)) {
	for (size_t i = 0; i < length; i++) {
		fn(adr[i]);
	}
}

template<typename T>
void increment(T & c) {
	c += 1;
	std::cout << c << std::endl;
}

void decrement(int &c) {
	c -= 1;
	std::cout << c << std::endl;
}

int main(void) {
	int	test[3] = {1, 2, 3};
	int		len = 3;

	std::cout << "Array is init like: {1, 2, 3}" << std::endl;
	std::cout << "--- Call decrement" << std::endl;
	iter<int>(test, len, &decrement);
	std::cout << "--- Call increment" << std::endl;
	iter<int>(test, len, &increment);
	return 0;
}
