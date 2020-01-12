#include <cstdlib>
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int size)
{
	std::string name_pool[10] = {
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
	std::string type_pool[4] = {
		"fire",
		"water",
		"earth",
		"wind"
	};
	horde = new Zombie*[size];
	horde_size = size;
	for (int i = 0; i < size; i++)
		horde[i] = new Zombie(name_pool[rand() % 10], type_pool[rand() % 4]);
}

ZombieHorde::~ZombieHorde()
{
	for (int i = 0; i < horde_size; i++)
		delete horde[i];
	delete [] horde;
}

void ZombieHorde::announce()
{
	for (int i = 0; i < horde_size; i++)
		horde[i]->announce();
}
