/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 09:47:21 by charles           #+#    #+#             */
/*   Updated: 2020/11/09 10:33:18 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie*     z;
	ZombieEvent zevent;
    Zombie      zStack("onTheStack", "IdontLikeHeap");

    int seed;
    std::ifstream devRandom("/dev/random");
    if (devRandom.is_open())
    {
        devRandom.read((char*)&seed, sizeof(int));
        devRandom.close();
    }
    else
        seed = time(NULL);
	srand(seed);
	zevent.setZombieType("NotRandom");
	z = zevent.newZombie("jean");
	zevent.setZombieType("random");
	delete z;
	for (int i = 0; i < 5; i++)
	{
		z = zevent.randomChump();
		delete z;
	}
	return 0;
}
