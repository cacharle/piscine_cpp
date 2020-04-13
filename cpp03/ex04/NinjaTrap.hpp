/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 17:31:24 by charles           #+#    #+#             */
/*   Updated: 2020/04/13 18:41:44 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const& other);
	void operator=(NinjaTrap const& other);
	~NinjaTrap();

    void ninjaShoebox(NinjaTrap const& target);
    void ninjaShoebox(FragTrap const& target);
    void ninjaShoebox(ScavTrap const& target);
    void ninjaShoebox(ClapTrap const& target);
};

#endif
