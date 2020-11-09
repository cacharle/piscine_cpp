/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 16:44:03 by cacharle          #+#    #+#             */
/*   Updated: 2020/11/09 11:09:22 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const& name, Weapon& weapon)
    : m_name(name), m_weapon(weapon)
{}

void HumanA::attack()
{
	std::cout << m_name << " attack with his " << m_weapon.getType() << std::endl;
}
