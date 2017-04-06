#include "FragTrap.hpp"

int main(void) {
	FragTrap	robot("Jack");

	robot.rangedAttack("enemy");
	robot.meleeAttack("enemy");
	robot.takeDamage(30);
	robot.takeDamage(100);
	robot.beRepaired(40);
	robot.beRepaired(100);
	robot.vaulthunter_dot_exe("enemy");
	robot.vaulthunter_dot_exe("enemy");
	robot.vaulthunter_dot_exe("enemy");
	robot.vaulthunter_dot_exe("enemy");
	robot.vaulthunter_dot_exe("enemy");
	return 0;
}
