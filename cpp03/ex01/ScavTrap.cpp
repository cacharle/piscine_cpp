/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 14:15:03 by charles           #+#    #+#             */
/*   Updated: 2020/11/17 16:47:57 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const& name):
    m_hitPoints(100),
    m_maxHitPoints(100),
    m_energyPoints(50),
    m_maxEnergyPoints(50),
    m_level(1),
    m_name(name),
    m_meleeAttackDamage(20),
    m_rangedAttackDamage(15),
    m_armorDamageReduction(3)
{
	std::cout << "SC4V-TP New " << m_name << ": your gaming references suck" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& other)
{
	std::cout << "SC4V-TP New from " << other.m_name << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& other)
{
    m_hitPoints            = other.m_hitPoints;
    m_maxHitPoints         = other.m_maxHitPoints;
    m_energyPoints         = other.m_energyPoints;
    m_maxEnergyPoints      = other.m_maxEnergyPoints;
    m_level                = other.m_level;
    m_meleeAttackDamage    = other.m_meleeAttackDamage;
    m_rangedAttackDamage   = other.m_rangedAttackDamage;
    m_armorDamageReduction = other.m_armorDamageReduction;
    return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP Delete " << m_name << ": your gaming references still suck" << std::endl;
}

void ScavTrap::rangedAttack(std::string const& target) const
{
	std::cout << "SC4V-TP "            << m_name
              << " attacks "           << target
			  << " at range, causing " << m_rangedAttackDamage
              << " points of damage!"  << std::endl;
}

void ScavTrap::meleeAttack(std::string const& target) const
{
	std::cout << "SC4V-TP "                << m_name
              << " attacks "               << target
			  << " in melee mode causing " << m_meleeAttackDamage
              << " points of damage!"      << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (amount < m_armorDamageReduction)
    {
        amount = 0;
    }
    else
    {
        amount -= m_armorDamageReduction;
    }
	if (amount > m_hitPoints)
    {
        amount = m_hitPoints;
    }
	m_hitPoints -= amount;
	std::cout << "SC4V-TP " << m_name
              << " takes "  << amount
              << " damage"  << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (amount + m_hitPoints > m_maxHitPoints)
        amount = m_maxHitPoints - m_hitPoints;
    m_hitPoints += amount;
	std::cout << "SC4V-TP "    << m_name
              << " gained "    << amount
              << " hit points" << std::endl;
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
              << " to "        << challenges[rand() % 5] << std::endl;
}

ScavTrap::ScavTrap() {}
