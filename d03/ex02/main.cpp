#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	FragTrap	frag("Jack");
	ScavTrap	scav("Jenny");

	frag.rangedAttack("enemy");
	frag.meleeAttack("enemy");
	frag.takeDamage(30);
	frag.takeDamage(100);
	frag.beRepaired(40);
	frag.beRepaired(100);
	frag.vaulthunter_dot_exe("enemy");
	frag.vaulthunter_dot_exe("enemy");
	frag.vaulthunter_dot_exe("enemy");
	frag.vaulthunter_dot_exe("enemy");
	frag.vaulthunter_dot_exe("enemy");
	frag.meleeAttack("enemy");

	scav.rangedAttack("enemy");
	scav.meleeAttack("enemy");
	scav.takeDamage(30);
	scav.takeDamage(100);
	scav.beRepaired(40);
	scav.beRepaired(100);
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.meleeAttack("enemy");
	return 0;
}
