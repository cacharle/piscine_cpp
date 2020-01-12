#include <cstdlib>
#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type)
{
	stored_type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	return new Zombie(name, stored_type);
}

Zombie *ZombieEvent::randomChump()
{
	std::string pool[10] = {
		"Jordan",
		"Mr.poopybutthole",
		"Jean-Denis",
		"Table",
		"Charle",
		"Abe",
		"James",
		"Homer",
		"yo",
		"rideaux"
	};
	return new Zombie(pool[rand() % 10], stored_type);
}
