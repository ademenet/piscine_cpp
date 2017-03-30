#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName, std::string zombieType): type(zombieType), name(zombieName) {
	return;
}

Zombie::~Zombie(void) {
	return;
}

void Zombie::announce(void) const {
	std::cout << "<" << this->name << " (" << this->type << ")>";
	std::cout << " I neeeed braaaaaiiiinnnnsss!!! Wouldn't you?" << std::endl;
	return;
}
