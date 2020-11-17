/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 09:56:14 by charles           #+#    #+#             */
/*   Updated: 2020/11/17 16:44:08 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
    int seed;
    std::ifstream devRandom("/dev/random");
    if (devRandom.is_open())
    {
        devRandom.read((char*)&seed, sizeof(int));
        devRandom.close();
    }
    else
    {
        seed = time(NULL);
    }
	srand(seed);

    std::cout << "=== Stack horde ===" << std::endl;
	ZombieHorde horde(5);
	horde.announce();

    std::cout << std::endl << "=== Heap horde ===" << std::endl;
	ZombieHorde *heap_horde = new ZombieHorde(7);
	heap_horde->announce();
	delete heap_horde;

    std::cout << std::endl << "=== Empty horde ===" << std::endl;
	ZombieHorde *empty_horde = new ZombieHorde(0);
	empty_horde->announce();
    delete empty_horde;

    std::cout << std::endl << "=== Error horde ===" << std::endl;
	ZombieHorde *negative_horde = new ZombieHorde(-13);
	negative_horde->announce();
    delete negative_horde;


    std::cout << std::endl << "=== Stack horde destroyed ===" << std::endl;
    return 0;
}
