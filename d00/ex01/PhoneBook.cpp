#include <iostream>
#include "PhoneBook.h"

PhoneBook::PhoneBook( void )
{
	for (int i = 0; i < 8; i++)
		this->person[i] = NULL;
}

PhoneBook::~PhoneBook( void )
{
}

Contacts	*add_contact( void )
{
	int		i = this._find_room( this->person );
	std::cout << "Please, give me some informations about this new contact:" << std::endl;
}

int			_find_room( void )
{
	int		i = -1;

	while (this->person[++i] != NULL) ;
	return(i);
}
