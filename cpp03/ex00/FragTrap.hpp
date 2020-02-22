/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 05:17:16 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/22 05:40:56 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CPP
# define FRAGTRAP_CPP

# include <string>

class FragTrap
{
	FragTrap();
	FragTrap(FragTrap const & other);
	FragTrap operator=(FragTrap const & other);
	~FragTrap();

	rangedAttack(std::string const & target);
	meleeAttack(std::string const & target);
	takeDamage(unsigned int amount);
	beRepaired(unsigned int amount);
	vaulthunter_dot_exe(std::string const & target);

	protected:
		std::string name;
		int hitPoints;
		int maxHitPoints;
		int energyPoints;
		int maxEnergyPoints;
		int level;
		int meleeAttackDamage;
		int rangedAttackDamage;
		int armorDamageReduction;
};

#endif
