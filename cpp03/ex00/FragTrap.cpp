/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 05:20:45 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/22 05:41:11 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : (std::string name)
{
	hitPoints = 100
	maxHitPoints = 100
	energyPoints = 100
	maxEnergyPoints = 100
	level = 1
	meleeAttackDamage = 30
	rangedAttackDamage = 20
	armorDamageReduction = 5
	std::cout << "New " << name << ": your gamer references sucks";
}

FragTrap::FragTrap(FragTrap const & other)
{
	name = other.name
	hitPoints = other.hitPoints;
	maxHitPoints = other.maxHitPoints;
	energyPoints = other.energyPoints;
	maxEnergyPoints = other.maxEnergyPoints;
	level = other.level;
	meleeAttackDamage = other.meleeAttackDamage;
	rangedAttackDamage = other.rangedAttackDamage;
	armorDamageReduction = other.armorDamageReduction;
}

FragTrap FragTrap::operator=(FragTrap const & other)
{
	return FragTrap(other);
}

FragTrap::~FragTrap()
{
	std::cout << "Delete " << name << ": your gamer references still sucks";
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target
			<< "at range, causing " << rangedAttackDamage << " points of damage!";
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target
			<< " causing " << meleeAttackDamage << " points of damage!";

}

void FragTrap::takeDamage(unsigned int amount)
{
	if (amount > maxHitPoints)
		amount = maxHitPoints
	if (amount > hitPoints)
	{
		hitPoints = 0;
		return ;
	}
	hitPoints -= amount;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (amound + hitPoints > max

}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{

}
