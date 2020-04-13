/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 15:28:43 by charles           #+#    #+#             */
/*   Updated: 2020/04/13 15:50:48 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
    m_prefix("CL4P-TP "),
    m_hitPoints(100),
    m_maxHitPoints(100),
    m_energyPoints(100),
    m_maxEnergyPoints(100),
    m_level(1),
    m_name(""),
    m_meleeAttackDamage(0),
    m_rangedAttackDamage(0),
    m_armorDamageReduction(0)
{
	std::cout << m_prefix << "New " << m_name << ": your gaming references suck" << std::endl;
}

ClapTrap::ClapTrap(std::string name):
    m_prefix("CL4P-TP "),
    m_hitPoints(100),
    m_maxHitPoints(100),
    m_energyPoints(100),
    m_maxEnergyPoints(100),
    m_level(1),
    m_name(name),
    m_meleeAttackDamage(0),
    m_rangedAttackDamage(0),
    m_armorDamageReduction(0)
{
	std::cout << m_prefix << "New " << m_name << ": your gaming references suck" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& other)
{
    *this = other;
}

void ClapTrap::operator=(ClapTrap const& other)
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

ClapTrap::~ClapTrap()
{
	std::cout << "CL4P-TP " << "Delete "<< m_name << ": your gaming references still suck" << std::endl;
}

void ClapTrap::rangedAttack(std::string const& target) const
{
	std::cout << m_prefix << m_name
              << " attacks " << target
			  << " at range, causing " << m_rangedAttackDamage
              << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const& target) const
{
	std::cout << m_prefix << m_name
              << " attacks " << target
			  << " in melee mode causing " << m_meleeAttackDamage
              << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount < m_armorDamageReduction)
        amount = 0;
    else
        amount -= m_armorDamageReduction;
	if (amount > m_hitPoints)
        amount = m_hitPoints;
	m_hitPoints -= amount;
	std::cout << m_prefix << m_name
              << " takes " << amount
              << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount + m_hitPoints > m_maxHitPoints)
        amount = m_maxHitPoints - m_hitPoints;
    m_hitPoints += amount;
	std::cout << m_prefix << m_name
              << " gained " << amount
              << " hit points" << std::endl;
}
