#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void) {
	ZombieEvent		*event = new ZombieEvent;
	Zombie			*zombie;

	// Define zombie with event generator
	event->setZombieType("brain lover");
	// Define zombie through ZombieEvent class which return an allocated zombie
	zombie = event->newZombie("Michel");
	// Make it announces it
	zombie->announce();
	// Then we set a new kind of zombie
	event->setZombieType("cervela gustaria");
	// Randomize its name and allocate it, then make it announces it
	event->randomChump().announce();
	// Delete every zombies
	delete event;
	delete zombie;
}
