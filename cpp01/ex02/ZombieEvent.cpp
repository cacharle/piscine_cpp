/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 09:41:33 by charles           #+#    #+#             */
/*   Updated: 2020/11/09 10:25:24 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string const& type)
{
	m_storedType = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	return new Zombie(name, m_storedType);
}

Zombie* ZombieEvent::randomChump()
{
	std::string pool[10] = {
		"Jordan",
		"Mr.poopybutthole",
		"Jean-Denis",
		"Table",
		"Charle",
		"Abe",
		"James",
		"Homer",
		"yo",
		"rideaux"
	};
	return newZombie(pool[rand() % 10]);
}
