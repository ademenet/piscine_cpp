#include <iostream>
#include <string>

char		*capitalize(char *string)
{
	int		len = strlen(string);

	for (int i = 0; i < len; i++)
		string[i] = toupper(string[i]);
	return string;
}

int			main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < ac; i++)
			std::cout << capitalize(av[i]);
	}
	std::cout << std::endl;

	return 0;
}
