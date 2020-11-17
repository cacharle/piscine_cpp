/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 09:52:11 by charles           #+#    #+#             */
/*   Updated: 2020/11/17 16:44:26 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
    : m_size(n)
{
    if (n < 0)
    {
        std::cerr << "Error: n should be > 0" << std::endl;
        m_horde = NULL;
        return;
    }
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
	m_horde = new Zombie[m_size];
	for (size_t i = 0; i < m_size; i++)
    {
		m_horde[i].setName(name_pool[rand() % 10]);
        m_horde[i].setType(type_pool[rand() % 4]);
    }
}

ZombieHorde::~ZombieHorde()
{
    if (m_horde == NULL)
    {
        return;
    }
	delete [] m_horde;
}

void ZombieHorde::announce()
{
    if (m_horde == NULL)
    {
        return;
    }
	for (size_t i = 0; i < m_size; i++)
    {
		m_horde[i].announce();
    }
}
