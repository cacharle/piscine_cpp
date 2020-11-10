/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 17:33:00 by charles           #+#    #+#             */
/*   Updated: 2020/11/10 14:43:25 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
    m_prefix = "NINJ4-TP ";
    m_hitPoints = 60;
    m_maxHitPoints = 60;
    m_energyPoints = 120;
    m_maxEnergyPoints = 120;
    m_meleeAttackDamage = 60;
    m_rangedAttackDamage = 5;
    m_armorDamageReduction = 0;
	std::cout << m_prefix << "New " << m_name << ": your gaming references suck" << std::endl;
}

NinjaTrap::NinjaTrap(std::string const& name) : ClapTrap(name)
{
    m_prefix = "NINJ4-TP ";
    m_hitPoints = 60;
    m_maxHitPoints = 60;
    m_energyPoints = 120;
    m_maxEnergyPoints = 120;
    m_meleeAttackDamage = 60;
    m_rangedAttackDamage = 5;
    m_armorDamageReduction = 0;
	std::cout << m_prefix << "New " << m_name << ": your gaming references suck" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const& other)
{
    *this = other;
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const& other)
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

NinjaTrap::~NinjaTrap()
{
	std::cout << m_prefix << "Delete "<< m_name << ": your gaming references still suck" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const& target)
{
    (void)target;
    std::cout << m_prefix << m_name
        << " attack other ninja trap, the guy who made the subject didn't gave a fuck" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const& target)
{
    (void)target;
    std::cout << m_prefix << m_name
        << " attack frag trap, leave me alone" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const& target)
{
    (void)target;
    std::cout << m_prefix << m_name
        << " attack sciv trap, ehehehe look at me I'm being funny" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap const& target)
{
    (void)target;
    std::cout << m_prefix << m_name
        << " attack clap trap, ISN'T THAT WHAT YOU WANTED" << std::endl;
}
