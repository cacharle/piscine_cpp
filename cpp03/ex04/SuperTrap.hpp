/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 17:48:31 by charles           #+#    #+#             */
/*   Updated: 2020/11/12 08:50:07 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <string>
# include <iostream>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap(std::string const& name);
	SuperTrap(SuperTrap const& other);
	SuperTrap& operator=(SuperTrap const& other);
	~SuperTrap();

	void rangedAttack(std::string const& target) const;
	void meleeAttack(std::string const& target) const;

private:
	SuperTrap();
};

#endif
