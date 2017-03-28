#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contacts.h"

class PhoneBook {

/*
 * PhoneBook provides a bunch of function in order to create, search, display
 * your contacts.
 */

public:
	PhoneBook( void );									// Constructor
	~PhoneBook( void );									// Destructor
	Contacts	*person[8];								// Our 8 contacts maximum
	Contacts	*add_contact( void );					// TODO
	// void		get_contact();							// useful ???
	void		display_contact( void );	// Display available contacts

private:
	int			_find_room( Contacts **person );

};

#endif
