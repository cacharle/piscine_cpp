/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 16:46:02 by cacharle          #+#    #+#             */
/*   Updated: 2020/11/09 11:13:34 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const& name)
    : m_name(name), m_weapon(NULL)
{}

void HumanB::attack()
{
    if (m_weapon == NULL)
	    std::cout << m_name << " doesn't have any weapon " << std::endl;
    else
	    std::cout << m_name << " attack with his " << m_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	m_weapon = &weapon;
}
