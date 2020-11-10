/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 05:17:16 by cacharle          #+#    #+#             */
/*   Updated: 2020/11/10 13:25:53 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <cstdlib>
# include <iostream>
# include <string>

class FragTrap
{
public:
	FragTrap();
	FragTrap(std::string const& name);
	FragTrap(FragTrap const& other);
	FragTrap& operator=(FragTrap const& other);
	~FragTrap();

	void rangedAttack(std::string const& target) const;
	void meleeAttack(std::string const& target) const;
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const& target);

private:
    unsigned int m_hitPoints;
    unsigned int m_maxHitPoints;
    unsigned int m_energyPoints;
    unsigned int m_maxEnergyPoints;
    unsigned int m_level;
    std::string  m_name;
    unsigned int m_meleeAttackDamage;
    unsigned int m_rangedAttackDamage;
    unsigned int m_armorDamageReduction;
};

#endif
