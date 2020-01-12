#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:
		Zombie(std::string n, std::string t);
		void announce();

	private:
		std::string name;
		std::string type;
};

#endif
