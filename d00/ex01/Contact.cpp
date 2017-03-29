#include "Contact.h"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void Contact::add_contact(void)
{
	std::cout << "Please give me your <first name>: ";
	std::getline (std::cin, this->first_name);
	std::cout << "Please give me your <last name>: ";
	std::getline (std::cin, this->last_name);
	std::cout << "Please give me your <nickname>: ";
	std::getline (std::cin, this->nickname);
	std::cout << "Please give me your <login>: ";
	std::getline (std::cin, this->login);
	std::cout << "Please give me your <postal address>: ";
	std::getline (std::cin, this->postal);
	std::cout << "Please give me your <email address>: ";
	std::getline (std::cin, this->email);
	std::cout << "Please give me your <phone number>: ";
	std::getline (std::cin, this->phone);
	std::cout << "Please give me your <birthday date>: ";
	std::getline (std::cin, this->birthday);
	std::cout << "Please give me your <favorite meal>: ";
	std::getline (std::cin, this->meal);
	std::cout << "Please give me your <underwear color>: ";
	std::getline (std::cin, this->underwear);
	std::cout << "Please give me your <darkest secret>: ";
	std::getline (std::cin, this->secret);
	std::cout << "Okay, now we know you :-) Welcome!" << std::endl;
}

void display_contact(void)
{

}
