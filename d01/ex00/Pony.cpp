#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string ponyName): name(ponyName) {
	std::cout << "You've just whistled " << this->name << ". Here it comes!" << std::endl;
	return;
}

Pony::~Pony(void) {
	std::cout << "NOOOO! You've just killed " << this->name << "! You bastard!" << std::endl;
	return;
}

void Pony::doStuffThatPonyDo(void) const {
	std::cout << this->name << " is just starring at you like a poney would do." << std::endl;
	return;
}
