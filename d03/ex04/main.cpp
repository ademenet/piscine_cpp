#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void) {
	FragTrap	frag("Jack");
	ScavTrap	scav("Jenny");

	frag.rangedAttack("enemy1");
	frag.meleeAttack("enemy2");
	frag.takeDamage(30);
	frag.takeDamage(100);
	frag.beRepaired(40);
	frag.beRepaired(100);
	frag.vaulthunter_dot_exe("enemy3");
	frag.vaulthunter_dot_exe("enemy4");
	frag.vaulthunter_dot_exe("enemy5");
	frag.vaulthunter_dot_exe("enemy6");
	frag.vaulthunter_dot_exe("enemy7");
	frag.meleeAttack("enemy8");

	scav.rangedAttack("enemy9");
	scav.meleeAttack("enemy10");
	scav.takeDamage(30);
	scav.takeDamage(100);
	scav.beRepaired(40);
	scav.beRepaired(100);
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.meleeAttack("enemy11");

	ClapTrap	clap("John");
	NinjaTrap	ninja("Henry");
	ninja.ninjaShoebox(clap);
	ninja.ninjaShoebox(frag);
	ninja.ninjaShoebox(scav);
	ninja.ninjaShoebox(ninja);
	ninja.rangedAttack("enemy12");
	ninja.meleeAttack("enemy13");

	SuperTrap	super("Supa");
	super.rangedAttack("enemy14");
	super.meleeAttack("enemy15");
	return 0;
}
