/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 05:17:16 by cacharle          #+#    #+#             */
/*   Updated: 2020/11/12 08:44:59 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <cstdlib>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(std::string const& name);
	FragTrap(FragTrap const& other);
	FragTrap& operator=(FragTrap const& other);
	~FragTrap();

	void vaulthunter_dot_exe(std::string const& target);

private:
	FragTrap();
};

#endif
