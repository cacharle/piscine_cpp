#include <cstdlib>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
	srand(time(NULL));

	ZombieHorde horde = ZombieHorde(10);
	horde.announce();

	ZombieHorde *heap_horde = new ZombieHorde(10);
	heap_horde->announce();
	delete heap_horde;
}
