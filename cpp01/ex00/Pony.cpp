#include <iostream>
#include "Pony.hpp"

Pony::Pony(int w, int s)
{
	weight = w;
	max_speed = s;
}

void Pony::say_hello()
{
	std::cout << "Hi, I'm a pony, I weight " << weight
		<< " and my speed limit is " << max_speed << std::endl;
}

void Pony::run()
{
	for (int i = 0; i < max_speed; i++)
		std::cout << "I'm running really fast at " << i << ", look at me!" << std::endl;
}
