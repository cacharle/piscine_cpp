/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 14:15:03 by charles           #+#    #+#             */
/*   Updated: 2020/11/12 10:07:26 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const& name) : ClapTrap(name)
{
    m_hitPoints            = 100;
    m_maxHitPoints         = 100;
    m_energyPoints         = 50;
    m_maxEnergyPoints      = 50;
    m_level                = 1;
    m_meleeAttackDamage    = 20;
    m_rangedAttackDamage   = 15;
    m_armorDamageReduction = 3;
	std::cout << "SC4V-TP New " << m_name << ": your gaming references suck" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& other) : ClapTrap(other)
{
	std::cout << "SC4V-TP New from "<< other.m_name << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& other)
{
    ClapTrap::operator=(other);
    return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP Delete " << m_name << ": your gaming references still suck" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const& target)
{
    std::string challenges[5] = {
        "lick your elbow",
        "do 1 push up",
        "dont talk for 1 hour",
        "draw your name by peeing in the snow",
        "punch me"
    };
	std::cout << "SC4V-TP "    << m_name
              << " challenge " << target
              << " to "        << challenges[rand() % 5]
              << std::endl;
}

ScavTrap::ScavTrap() {}
