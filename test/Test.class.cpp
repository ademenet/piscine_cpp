#include <iostream>
#include "Test.class.hpp"

Test::Test(void)
{
	std::cout << "Build :)" << std::endl;
	return;
}

Test::~Test(void)
{
	std::cout << "Destruct :(" << std::endl;
	return;
}
