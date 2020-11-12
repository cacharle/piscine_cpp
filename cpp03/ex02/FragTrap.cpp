/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 05:20:45 by cacharle          #+#    #+#             */
/*   Updated: 2020/11/12 10:07:11 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const& name) : ClapTrap(name)
{
    m_hitPoints            = 100;
    m_maxHitPoints         = 100;
    m_energyPoints         = 100;
    m_maxEnergyPoints      = 100;
    m_level                = 1;
    m_meleeAttackDamage    = 30;
    m_rangedAttackDamage   = 20;
    m_armorDamageReduction = 5;
	std::cout << "FR4G-TP New " << m_name << ": your gaming references suck" << std::endl;
}

FragTrap::FragTrap(FragTrap const& other) : ClapTrap(other)
{
	std::cout << "FR4G-TP New from "<< other.m_name << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& other)
{
    ClapTrap::operator=(other);
    return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP Delete "<< m_name << ": your gaming references still suck" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const& target)
{
    if (m_energyPoints < 25)
    {
        std::cout << "FR4G-TP " << m_name << " does not have enough energy" << std::endl;
        return;
    }
    std::string attacks[5] = {
        "boum boum",
        "cursed for generation",
        "sit and wait for your death",
        "mimic a gun with his hand and make 'piou piou' sound",
        "shot you in the face"
    };
	std::cout << "FR4G-TP " << m_name
              << " attacks " << target
              << " with " << attacks[rand() % 5] << std::endl;
    m_energyPoints -= 25;
}

FragTrap::FragTrap() {}
