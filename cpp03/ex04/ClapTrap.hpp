/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 15:20:45 by charles           #+#    #+#             */
/*   Updated: 2020/04/13 15:47:14 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const& other);
	void operator=(ClapTrap const& other);
	~ClapTrap();

	void rangedAttack(std::string const& target) const;
	void meleeAttack(std::string const& target) const;
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
    std::string m_prefix;

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
