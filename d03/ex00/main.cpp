#include "FragTrap.hpp"

int main(void) {
	FragTrap	robot("Jack");

	robot.meleeAttack("enemy");
	robot.rangedAttack("enemy");
	robot.takeDamage(30);
	robot.takeDamage(30);
	robot.takeDamage(30);
	robot.takeDamage(30);
	robot.takeDamage(30);
	robot.beRepaired(40);
	robot.beRepaired(100);
	robot.vaulthunter_dot_exe("enemy");
	robot.vaulthunter_dot_exe("enemy");
	robot.vaulthunter_dot_exe("enemy");
	robot.vaulthunter_dot_exe("enemy");
	robot.vaulthunter_dot_exe("enemy");
	robot.meleeAttack("enemy");
	return 0;
}
