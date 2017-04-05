#include "Human.hpp"

int main(void) {
	Human	human;

	human.action("melee", "zombie kid");
	human.action("ranged", "zombie grandma");
	human.action("shout", "zombie redneck");
	return(0);
}
