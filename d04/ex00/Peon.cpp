#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::Peon(Peon const &src) {
	*this = src;
	return;
}

Peon::~Peon(void) {
	std::cout << "Bleuark..." << std::endl;
	return;
}

Peon &Peon::operator=(Peon const &rhs) {
	if (this != &rhs)
		this->_name = rhs._name;
	return *this;
}

void Peon::getPolymorphed(void) const {
	std::cout << this->_name << " has been turned into pink pony!" << std::endl;
	return;
}
