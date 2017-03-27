#include <iostream>
#include "Test.class.hpp"

Test::Test(void)
{
	std::cout << "Build :)" << std::endl;
	this->foo = 42;
	std::cout << "I'm " << this->foo << "!!!" << std::endl;
	this->ft_foo();
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
