#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main(void) {
	FragTrap	frag("Jack");
	ScavTrap	scav("Jenny");

	std::cout << std::endl << "-- Tests for FragTrap" << std::endl;
	frag.meleeAttack("enemy");
	frag.rangedAttack("enemy");
	frag.takeDamage(30);
	frag.takeDamage(30);
	frag.takeDamage(30);
	frag.takeDamage(30);
	frag.takeDamage(30);
	frag.beRepaired(40);
	frag.beRepaired(100);
	frag.vaulthunter_dot_exe("enemy");
	frag.vaulthunter_dot_exe("enemy");
	frag.vaulthunter_dot_exe("enemy");
	frag.vaulthunter_dot_exe("enemy");
	frag.vaulthunter_dot_exe("enemy");
	frag.meleeAttack("enemy");

	std::cout << std::endl << "-- Tests for ScavTrap" << std::endl;
	scav.meleeAttack("enemy");
	scav.rangedAttack("enemy");
	scav.takeDamage(30);
	scav.takeDamage(30);
	scav.takeDamage(30);
	scav.takeDamage(30);
	scav.takeDamage(30);
	scav.beRepaired(40);
	scav.beRepaired(100);
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.meleeAttack("enemy");

	std::cout << std::endl << "-- Instantiate ClapTrap" << std::endl;
	ClapTrap	clap("John");

	std::cout << std::endl << "-- Instantiate NinjaTrap" << std::endl;
	NinjaTrap	ninja("Henry");

	std::cout << std::endl << "-- Tests for NinjaTrap" << std::endl;
	std::cout << "--- For clap == John" << std::endl;
	ninja.ninjaShoebox(clap);
	std::cout << "--- For frag == Jack" << std::endl;
	ninja.ninjaShoebox(frag);
	std::cout << "--- For scav == Jenny" << std::endl;
	ninja.ninjaShoebox(scav);
	std::cout << "--- For ninja == Henry" << std::endl;
	ninja.ninjaShoebox(ninja);
	return 0;
}
