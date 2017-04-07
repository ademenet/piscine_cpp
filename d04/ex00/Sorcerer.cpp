#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) {
	return;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
	return;
}

Sorcerer::Sorcerer(Sorcerer const &src) {
	*this = src;
	return;
}

Sorcerer::~Sorcerer(void) {
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
	return;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_title = rhs._title;
	}
	return *this;
}

void Sorcerer::introduce(void) const {
	std::cout << "I am " << this->_name << ", " << this->_title << ", and I like ponies!" << std::endl;
	return;
}

const std::string Sorcerer::getIntroduce(void) const {
	return ("I am " + this->_name + ", " + this->_title + ", and I like ponies!");
}

void Sorcerer::polymorph(Victim const &src) const {
	src.getPolymorphed();
	return;
}

// Out of scope
std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs) {
	o << rhs.getIntroduce() << std::endl;
	return o;
}
