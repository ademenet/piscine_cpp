#include "Contact.h"

void				display_multiple_contacts(Contact contacts[8], int nb)
{
	std::cout << std::setfill(' ') << std::setw(10) << "index" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "first name" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "last name" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "nickname" << "|";
	std::cout << std::endl;
	for(int iter = 0; iter < nb ; iter++)
		contacts[iter].display_contact(iter + 1);
}

int					main( void )
{
	std::string		instruct;
	std::string		index_selected;
	Contact			contacts[8];
	bool			exit_phoneBook = true;
	int				nb = 0;
	int				index_to_display = 0;

	// MENU LOOP
	std::cout << "- Welcome in PhoneBook" << std::endl;
	do {
		std::cout << "-- Commands:" << std::endl;
		std::cout << "---- ADD: add a new friend" << std::endl;
		std::cout << "---- SEARCH: search a friend" << std::endl;
		std::cout << "---- EXIT: bye bye!" << std::endl;
		std::cout << "------ What do you wan't to do? ";
		std::getline(std::cin, instruct);
		// ADD COMMAND
		if (instruct.compare("ADD") == 0)
		{
			if (nb >= 0 && nb < 8)
			{
				contacts[nb].add_contact();
				nb++;
			}
			else
				std::cout << "Sorry, you have already used every 8 contacts available. Too bad." << std::endl;
		}
		// SEARCH COMMAND
		else if (instruct.compare("SEARCH") == 0)
		{
			if (nb > 0 && nb <= 8)
			{
				display_multiple_contacts(contacts, nb);
				do {
					std::cout << "Please select an <index> to display all the infos: ";
					std::getline(std::cin, index_selected);
				} while (index_selected.find_first_not_of("12345678") != std::string::npos ||
						 index_selected.length() != 1);
				index_to_display = std::stoi(index_selected);
				if (index_to_display > nb)
				{
					std::cout << "Sorry, index " << index_to_display;
					std::cout << " doesn't exist yet. Create it! Back to menu." << std::endl;
				}
				else
					contacts[index_to_display - 1].get_contact();
			}
			else
				std::cout << "Sorry, you have no contact. Use <ADD> command to add one." << std::endl;
		}
		// EXIT COMMAND
		else if (instruct.compare("EXIT") == 0)
			exit_phoneBook = false;
		else
			std::cout << "Wrong instruction. Please, retry." << std::endl;
	} while (exit_phoneBook == true);
	std::cout << "- See you later in PhoneBook" << std::endl;
	return (0);
}
