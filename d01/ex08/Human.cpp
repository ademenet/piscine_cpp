#include "Human.hpp"

void Human::meleeAttack(std::string const &target) {
	std::cout << "Use melee attack on " << target << std::endl;
	return;
}

void Human::rangedAttack(std::string const &target) {
	std::cout << "Use ranged attack on " << target << std::endl;
	return;
}

void Human::intimidatingShout(const std::string &target) {
	std::cout << "Use intimidating shout on " << target << std::endl;
	return;
}

void Human::action(const std::string &action_name, const std::string &target) {
	std::string actions[3] = { "melee", "ranged", "shout" };
	void (Human::*doAction[3])(const std::string &) = { &Human::meleeAttack,
														&Human::rangedAttack,
														&Human::intimidatingShout };
	int i = 0;

	while (action_name != actions[i])
		i++;
	if (i > -1 && i < 3)
		(this->*doAction[i])(target);
	return;
}
