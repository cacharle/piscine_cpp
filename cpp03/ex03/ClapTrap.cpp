/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 15:28:43 by charles           #+#    #+#             */
/*   Updated: 2020/11/17 16:49:01 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const& name):
    m_hitPoints(0),
    m_maxHitPoints(0),
    m_energyPoints(0),
    m_maxEnergyPoints(0),
    m_level(0),
    m_name(name),
    m_meleeAttackDamage(0),
    m_rangedAttackDamage(0),
    m_armorDamageReduction(0)
{
	std::cout << "CL4P-TP New " << m_name << ": your gaming references suck" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& other)
{
	std::cout << "CL4P-TP New from " << other.m_name << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& other)
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

ClapTrap::~ClapTrap()
{
	std::cout << "CL4P-TP Delete "<< m_name << ": your gaming references still suck" << std::endl;
}

void ClapTrap::rangedAttack(std::string const& target) const
{
	std::cout << "CL4P-TP "            << m_name
              << " attacks "           << target
			  << " at range, causing " << m_rangedAttackDamage
              << " points of damage!"  << std::endl;
}

void ClapTrap::meleeAttack(std::string const& target) const
{
	std::cout << "CL4P-TP "                << m_name
              << " attacks "               << target
			  << " in melee mode causing " << m_meleeAttackDamage
              << " points of damage!"      << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount < m_armorDamageReduction)
        amount = 0;
    else
    {
        amount -= m_armorDamageReduction;
    }
	if (amount > m_hitPoints)
        amount = m_hitPoints;
	m_hitPoints -= amount;
	std::cout << "CL4P-TP " << m_name
              << " takes "  << amount
              << " damage"  << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount + m_hitPoints > m_maxHitPoints)
        amount = m_maxHitPoints - m_hitPoints;
    m_hitPoints += amount;
	std::cout << "CL4P-TP "    <<  m_name
              << " gained "    << amount
              << " hit points" << std::endl;
}

ClapTrap::ClapTrap() {}
