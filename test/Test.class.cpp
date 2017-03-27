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

void	Test::ft_foo(void)
{
	std::cout << "I'm ft_foo function!" << std::endl;
	return;
}
