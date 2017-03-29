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
	std::cout << "-------- Please give me your <first name>: ";
	std::getline (std::cin, this->first_name);
	std::cout << "-------- Please give me your <last name>: ";
	std::getline (std::cin, this->last_name);
	std::cout << "-------- Please give me your <nickname>: ";
	std::getline (std::cin, this->nickname);
	std::cout << "-------- Please give me your <login>: ";
	std::getline (std::cin, this->login);
	std::cout << "-------- Please give me your <postal address>: ";
	std::getline (std::cin, this->postal);
	std::cout << "-------- Please give me your <email address>: ";
	std::getline (std::cin, this->email);
	std::cout << "-------- Please give me your <phone number>: ";
	std::getline (std::cin, this->phone);
	std::cout << "-------- Please give me your <birthday date>: ";
	std::getline (std::cin, this->birthday);
	std::cout << "-------- Please give me your <favorite meal>: ";
	std::getline (std::cin, this->meal);
	std::cout << "-------- Please give me your <underwear color>: ";
	std::getline (std::cin, this->underwear);
	std::cout << "-------- Please give me your <darkest secret>: ";
	std::getline (std::cin, this->secret);
	std::cout << "-------- Okay, now we know you :-) Welcome!" << std::endl;
	return;
}

void Contact::display_contact(int index)
{
	std::cout << std::setfill(' ') << std::setw(10) << index << "|";
	if (this->first_name.length() > 10)
		std::cout << this->first_name.substr(0, 9) << ".";
	else
		std::cout << std::setfill(' ') << std::setw(10) << this->first_name;
	std::cout << "|";
	if (this->last_name.length() > 10)
		std::cout << this->last_name.substr(0, 9) << ".";
	else
		std::cout << std::setfill(' ') << std::setw(10) << this->last_name;
	std::cout << "|";
	if (this->nickname.length() > 10)
		std::cout << this->nickname.substr(0, 9) << ".";
	else
		std::cout << std::setfill(' ') << std::setw(10) << this->nickname;
	std::cout << "|" << std::endl;
	return;
}

void Contact::get_contact(void)
{
	std::cout << "-------- Contact's infos:" << std::endl;
	std::cout << "-------- <first name>: " << this->first_name << std::endl;
	std::cout << "-------- <last name>: " << this->last_name << std::endl;
	std::cout << "-------- <nickname>: " << this->nickname << std::endl;
	std::cout << "-------- <login>: " << this->login << std::endl;
	std::cout << "-------- <postal address>: " << this->postal << std::endl;
	std::cout << "-------- <email address>: " << this->email << std::endl;
	std::cout << "-------- <phone number>: " << this->phone << std::endl;
	std::cout << "-------- <birthday date>: " << this->birthday << std::endl;
	std::cout << "-------- <favorite meal>: " << this->meal << std::endl;
	std::cout << "-------- <underwear color>: " << this->underwear << std::endl;
	std::cout << "-------- <darkest secret>: " << this->secret << std::endl;
	return;
}
