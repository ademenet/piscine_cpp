#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName, std::string zombieType): _type(zombieType), _name(zombieName) {
	std::cout << "Wuuut?! A zombie that called himself " << this->_name << " just appeared!" << std::endl;
	return;
}

Zombie::~Zombie(void) {
	std::cout << "Byebye " << this->_name << "... Good riddance!" << std::endl;
	return;
}

void Zombie::announce(void) const {
	std::cout << "<" << this->_name << " (" << this->_type << ")> ";
	std::cout << "I neeeed braaaaaiiiinnnnsss!!! Wouldn't you?" << std::endl;
	return;
}
