/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 17:33:00 by charles           #+#    #+#             */
/*   Updated: 2020/11/12 10:07:47 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string const& name) : ClapTrap(name)
{
    m_hitPoints            = 60;
    m_maxHitPoints         = 60;
    m_energyPoints         = 120;
    m_maxEnergyPoints      = 120;
    m_level                = 1;
    m_meleeAttackDamage    = 60;
    m_rangedAttackDamage   = 5;
    m_armorDamageReduction = 0;
	std::cout << "NINJ4-TP New " << m_name << ": your gaming references suck" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const& other) : ClapTrap(other)
{
	std::cout << "NINJ4-TP New from "<< other.m_name << std::endl;
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const& other)
{
    ClapTrap::operator=(other);
    return *this;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NINJ4-TP Delete "<< m_name << ": your gaming references still suck" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const& target)
{
    (void)target;
    std::cout << "NINJ4-TP " << m_name
        << " attack other ninja trap, the guy who made the subject didn't gave a fuck" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const& target)
{
    (void)target;
    std::cout << "NINJ4-TP " << m_name
        << " attack frag trap, leave me alone" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const& target)
{
    (void)target;
    std::cout << "NINJ4-TP " << m_name
        << " attack sciv trap, ehehehe look at me I'm being funny" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap const& target)
{
    (void)target;
    std::cout << "NINJ4-TP " << m_name
        << " attack clap trap, ISN'T THAT WHAT YOU WANTED" << std::endl;
}

NinjaTrap::NinjaTrap() {}
