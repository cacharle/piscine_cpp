/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 17:31:24 by charles           #+#    #+#             */
/*   Updated: 2020/11/10 14:43:01 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string const& name);
	NinjaTrap(NinjaTrap const& other);
	NinjaTrap& operator=(NinjaTrap const& other);
	~NinjaTrap();

    void ninjaShoebox(NinjaTrap const& target);
    void ninjaShoebox(FragTrap const& target);
    void ninjaShoebox(ScavTrap const& target);
    void ninjaShoebox(ClapTrap const& target);
};

#endif
