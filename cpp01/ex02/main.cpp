#include <cstdlib>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie *z;
	ZombieEvent zevent;

	srand(time(NULL));
	zevent.setZombieType("standard");
	z = zevent.newZombie("jean");
	delete z;
	for (int i = 0; i < 5; i++)
	{
		z = zevent.randomChump();
		delete z;
	}
	return 0;
}
