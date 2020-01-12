#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
	public:
		ZombieHorde(int size);
		void announce();
		~ZombieHorde();

	private:
		int horde_size;
		Zombie **horde;
};

#endif
