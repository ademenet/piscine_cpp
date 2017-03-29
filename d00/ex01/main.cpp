#include "Contact.h"

// TODO EXIT
// DONE ADD :
// TODO ADD petit bug de retour a la ligne direct
// TODO SEARCH

int					main( void )
{
	std::string		instruct;
	bool			exit_phoneBook = true;
	Contact			contacts[8];
	int				i = 0;

	std::cout << "================================== PhoneBook ===================================" << std::endl;
	do
	{
		// Display the menu
		std::cout << "Commands:" << std::endl;
		std::cout << "ADD: add a new friend" << std::endl;
		std::cout << "SEARCH: search a friend" << std::endl;
		std::cout << "EXIT: bye bye!" << std::endl;
		std::cout << "What do you wan't to do?" << std::endl;
		// Wait for instruction
		std::getline(std::cin, instruct);
		// Check instruction
		if (instruct.compare("ADD") == 0)
		{
			if (i++ < 8)
				contacts[i].add_contact();
			else
				std::cout << "Sorry, you have already used every 8 contacts available. Too bad." << std::endl;
		}
		else if (instruct.compare("SEARCH") == 0)
		{
			std::cout << "SEARCH WIP" << std::endl;
		}
		else if (instruct.compare("EXIT") == 0)
		{
			exit_phoneBook = false;
		}
		else
			std::cout << "Wrong instruction. Please, retry." << std::endl;
	} while (exit_phoneBook == true);
	return (0);
}
