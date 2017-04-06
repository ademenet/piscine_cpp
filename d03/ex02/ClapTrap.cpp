#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name) {
	return;
}


ClapTrap::ClapTrap(ClapTrap const &src) {
	std::cout << "\"Glitching weirdness is a term of endearment, right?\"" << std::endl;
	*this = src;
	return;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "\"No, nononono NO!\"" << std::endl;
	return;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs) {
	return *this;
}
