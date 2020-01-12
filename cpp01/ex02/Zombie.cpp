#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string n, std::string t)
{
	name = n;
	type = t;
	announce();
}

void Zombie::announce()
{
	std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss..." << std::endl;
}
