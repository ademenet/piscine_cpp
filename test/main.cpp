#include <iostream>
#include "Test.class.hpp"

int			main(void)
{
	Test	var_foo;

	var_foo.foo = 42;
	std::cout << "foo var is: " << var_foo.foo << std::endl;
	var_foo.ft_foo();
	return(0);
}
