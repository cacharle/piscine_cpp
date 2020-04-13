/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 09:52:11 by charles           #+#    #+#             */
/*   Updated: 2020/04/13 10:02:01 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
    : m_size(n)
{
	std::string name_pool[10] = {
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
	std::string type_pool[4] = {
		"fire",
		"water",
		"earth",
		"wind"
	};
	m_horde = new Zombie*[m_size];
	for (size_t i = 0; i < m_size; i++)
		m_horde[i] = new Zombie(name_pool[rand() % 10], type_pool[rand() % 4]);
}

ZombieHorde::~ZombieHorde()
{
	for (size_t i = 0; i < m_size; i++)
		delete m_horde[i];
	delete [] m_horde;
}

void ZombieHorde::announce()
{
	for (size_t i = 0; i < m_size; i++)
		m_horde[i]->announce();
}
