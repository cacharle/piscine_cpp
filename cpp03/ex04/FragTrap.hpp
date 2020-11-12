/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 05:17:16 by cacharle          #+#    #+#             */
/*   Updated: 2020/11/12 09:14:11 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(std::string const& name);
	FragTrap(FragTrap const& other);
	FragTrap& operator=(FragTrap const& other);
	~FragTrap();

	void vaulthunter_dot_exe(std::string const& target);

protected:
	FragTrap();
};

#endif
