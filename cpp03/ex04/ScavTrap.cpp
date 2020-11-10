/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 14:15:03 by charles           #+#    #+#             */
/*   Updated: 2020/11/10 15:06:28 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():
    ClapTrap()
{
    m_prefix = "SC4V-TP ";
    m_energyPoints = 50;
    m_maxEnergyPoints = 50;
    m_meleeAttackDamage = 20;
    m_rangedAttackDamage = 15;
    m_armorDamageReduction = 3;
	std::cout << "New " << m_name << ": your gaming references suck" << std::endl;
}

ScavTrap::ScavTrap(std::string name):
    ClapTrap(name)
{
    m_prefix = "SC4V-TP ";
    m_energyPoints = 50;
    m_maxEnergyPoints = 50;
    m_meleeAttackDamage = 20;
    m_rangedAttackDamage = 15;
    m_armorDamageReduction = 3;
	std::cout << "SC4V-TP New " << m_name << ": your gaming references suck" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& other)
{
    *this = other;
}

void ScavTrap::operator=(ScavTrap const& other)
{
    m_hitPoints            = other.m_hitPoints;
    m_maxHitPoints         = other.m_maxHitPoints;
    m_energyPoints         = other.m_energyPoints;
    m_maxEnergyPoints      = other.m_maxEnergyPoints;
    m_level                = other.m_level;
    m_meleeAttackDamage    = other.m_meleeAttackDamage;
    m_rangedAttackDamage   = other.m_rangedAttackDamage;
    m_armorDamageReduction = other.m_armorDamageReduction;
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
	std::cout << "SC4V-TP " << m_name
              << " challenge " << target
              << " to " << challenges[rand() % 5] << std::endl;
}
