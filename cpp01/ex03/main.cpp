/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 09:56:14 by charles           #+#    #+#             */
/*   Updated: 2020/04/13 09:58:56 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
	srand(time(NULL));

    std::cout << "Stack horde" << std::endl;
	ZombieHorde horde(5);
	horde.announce();

    std::cout << std::endl << "Heap horde" << std::endl;
	ZombieHorde *heap_horde = new ZombieHorde(7);
	heap_horde->announce();
	delete heap_horde;
}
