#include "Human.hpp"

Human::Human(void) {
	return;
}

Human::~Human(void) {
	return;
}

std::string Human::identify(void) {
	return(this->_humanBrain.identify());
}

const Brain &Human::getBrain(void) {
	return(this->_humanBrain);
}
