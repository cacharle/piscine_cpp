/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 17:52:56 by charles           #+#    #+#             */
/*   Updated: 2020/11/12 10:33:35 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string const& name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
    m_hitPoints            = 100;
    m_maxHitPoints         = 100;
    m_energyPoints         = 120;
    m_maxEnergyPoints      = 120;
    m_level                = 1;
    m_name                 = name;
    m_meleeAttackDamage    = 60;
    m_rangedAttackDamage   = 20;
    m_armorDamageReduction = 5;
	std::cout << "SUP3R-TP New " << m_name << ": your gaming references suck" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const& other) : ClapTrap(other), FragTrap(other), NinjaTrap(other) {}

SuperTrap& SuperTrap::operator=(SuperTrap const& other)
{
    ClapTrap::operator=(other);
    return *this;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SUP3R-TP Delete "<< m_name << ": your gaming references still suck" << std::endl;
}

void SuperTrap::rangedAttack(std::string const& target) const
{
    FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const& target) const
{
    NinjaTrap::meleeAttack(target);
}

SuperTrap::SuperTrap() {}
