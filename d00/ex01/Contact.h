#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>

class Contact {

public:
	Contact(void);
	~Contact(void);
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal;
	std::string	email;
	std::string	phone;
	std::string	birthday;
	std::string	meal;
	std::string	underwear;
	std::string	secret;
	void add_contact(void);
	void display_contact(int index) const;
	void get_contact(void) const;

};

#endif
