/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 05:20:45 by cacharle          #+#    #+#             */
/*   Updated: 2020/11/11 06:42:32 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    m_energyPoints         = 100;
    m_maxEnergyPoints      = 100;
    m_meleeAttackDamage    = 30;
    m_rangedAttackDamage   = 20;
    m_armorDamageReduction = 5;
	std::cout << "FR4G-TP New " << m_name << ": your gaming references suck" << std::endl;
}

FragTrap::FragTrap(std::string const& name) : ClapTrap(name)
{
    m_energyPoints         = 100;
    m_maxEnergyPoints      = 100;
    m_meleeAttackDamage    = 30;
    m_rangedAttackDamage   = 20;
    m_armorDamageReduction = 5;
	std::cout << "FR4G-TP New " << m_name << ": your gaming references suck" << std::endl;
}

FragTrap::FragTrap(FragTrap const& other)
{
    *this = other;
}

FragTrap& FragTrap::operator=(FragTrap const& other)
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
