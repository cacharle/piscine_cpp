/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 14:11:51 by charles           #+#    #+#             */
/*   Updated: 2020/04/13 15:18:01 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <cstdlib>
# include <iostream>
# include <string>

class ScavTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const& other);
    void operator=(ScavTrap const& other);
    ~ScavTrap();

	void rangedAttack(std::string const& target) const;
	void meleeAttack(std::string const& target) const;
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
    void challengeNewcomer(std::string const& target);

private:
    unsigned int m_hitPoints;
    unsigned int m_maxHitPoints;
    unsigned int m_energyPoints;
    unsigned int m_maxEnergyPoints;
    unsigned int m_level;
    std::string m_name;
    unsigned int m_meleeAttackDamage;
    unsigned int m_rangedAttackDamage;
    unsigned int m_armorDamageReduction;
};

#endif