#include <iostream>
#include <string>
// #include "Contacts.h"

// TODO EXIT
// TODO ADD
// TODO SEARCH

// using namespace std;



int			main( void )
{
	std::string	instruct;
	bool		exit_phoneBook = true;

	std::cout << "================================== PhoneBook ===================================" << std::endl;
	do
	{
		// Display the menu
		std::cout << "Commands:" << std::endl;
		std::cout << "\tADD: add a new friend" << std::endl;
		std::cout << "\tSEARCH: search a friend" << std::endl;
		std::cout << "\tEXIT: bye bye!" << std::endl;
		std::cout << "What do you wan't to do?" << std::endl;
		// Wait for instruction
		std::cin >> instruct;
		// std::getline(std::cin, instruct);
		// Check instruction
		if (instruct.compare("ADD") == 0)
		{

			std::cout << "ADD WIP" << std::endl;
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
