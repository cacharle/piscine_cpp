/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 09:47:21 by charles           #+#    #+#             */
/*   Updated: 2020/04/13 09:48:29 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie* z;
	ZombieEvent zevent;
    Zombie zStack("onTheStack", "IdontLikeHeap");

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
