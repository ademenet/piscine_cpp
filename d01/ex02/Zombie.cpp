#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName, std::string zombieType): type(zombieType), name(zombieName) {
	std::cout << "Wuuut?! A zombie that called himself " << this->name << " just appeared!" << std::endl;
	return;
}

Zombie::~Zombie(void) {
	std::cout << "Byebye " << this->name << "... Good riddance!" << std::endl;
	return;
}

void Zombie::announce(void) const {
	std::cout << "<" << this->name << " (" << this->type << ")>";
	std::cout << " I neeeed braaaaaiiiinnnnsss!!! Wouldn't you?" << std::endl;
	return;
}
