/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 17:52:56 by charles           #+#    #+#             */
/*   Updated: 2020/04/13 17:55:14 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap():
    m_prefix("SUP3R-TP"),
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

SuperTrap::SuperTrap(std::string name):
    m_prefix("SUP3R-TP"),
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

SuperTrap::SuperTrap(SuperTrap const& other)
{
    *this = other;
}

void SuperTrap::operator=(SuperTrap const& other)
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

SuperTrap::~SuperTrap()
{
	std::cout << "SUP3R-TP" << "Delete "<< m_name << ": your gaming references still suck" << std::endl;
}

void SuperTrap::rangedAttack(std::string const& target) const
{
    FragTrap::rangedArray(target);
}

void SuperTrap::meleeAttack(std::string const& target) const
{
    NinjaTrap::rangedArray(target);
}
