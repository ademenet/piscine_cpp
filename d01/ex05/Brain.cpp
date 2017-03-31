#include "Brain.hpp"

Brain::Brain(void) {
	return;
}

Brain::~Brain(void) {
	return;
}

std::string Brain::identify(void) const {
	std::stringstream	address;
	address << this;
	return(address.str());
}
