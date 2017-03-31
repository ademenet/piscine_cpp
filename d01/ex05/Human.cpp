#include "Human.hpp"

Human::Human(void) {
	return;
}

Human::~Human(void) {
	return;
}

std::string Human::identify(void) {
	return(this->humanBrain.identify());
}

const Brain &Human::getBrain(void) {
	return(this->humanBrain);
}
