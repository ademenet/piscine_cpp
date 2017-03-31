#include <iostream>

int main(void) {
	std::string brain = "HI THIS IS BRAIN";
	std::string *ptrbrain = &brain;
	std::string &refbrain = brain;

	// Using the pointer
	std::cout << *ptrbrain << std::endl;
	// Using a reference
	std::cout << refbrain << std::endl;
	return(0);
}
