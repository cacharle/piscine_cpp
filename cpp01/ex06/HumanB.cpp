/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 16:46:02 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/13 10:25:54 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
    : m_name(name), m_weapon(NULL)
{
}

void HumanB::attack()
{
	std::cout << m_name << " attack with his " << m_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	m_weapon = &weapon;
}
