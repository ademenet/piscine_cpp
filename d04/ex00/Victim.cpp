#include "Victim.hpp"

Victim::Victim(void) {
	return;
}

Victim::Victim(std::string name) : _name(name) {
	std::cout << "Some random victim called " << this->_name << " just popped!" << std::endl;
	return;
}

Victim::Victim(Victim const &src) {
	*this = src;
	return;
}

Victim::~Victim(void) {
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
	return;
}

Victim &Victim::operator=(Victim const &rhs) {
	if (this != &rhs)
		this->_name = rhs._name;
	return *this;
}

void Victim::introduce(void) const {
	std::cout << "I'm " << this->_name << " and I like otters!" << std::endl;
	return;
}

const std::string Victim::getIntroduce(void) const {
	return ("I'm " + this->_name + " and I like otters!");
}

void Victim::getPolymorphed(void) const {
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
	return;
}

// Out of scope
std::ostream &operator<<(std::ostream &o, Victim const &rhs) {
	o << rhs.getIntroduce() << std::endl;
	return o;
}
