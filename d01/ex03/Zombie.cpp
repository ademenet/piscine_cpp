#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "A new zombie created!" << std::endl;
	return;
}

Zombie::~Zombie(void) {
	std::cout << "Byebye " << this->_name << "... Good riddance!" << std::endl;
	return;
}

void Zombie::setName(std::string name) {
	this->_name = name;
	return;
}

void Zombie::setType(std::string type) {
	this->_type = type;
	return;
}

void Zombie::announce(void) const {
	std::cout << "<" << this->_name << " (" << this->_type << ")> ";
	std::cout << "I neeeed braaaaaiiiinnnnsss!!! Wouldn't you?" << std::endl;
	return;
}
