#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"

// TODO you will turn in your main function, because anything that’s not tested will not be graded

int main(void) {
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	Victim *bob = new Peon("bob");
	delete bob;
	return 0;
}
