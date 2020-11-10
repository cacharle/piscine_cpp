/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 14:11:51 by charles           #+#    #+#             */
/*   Updated: 2020/11/10 14:38:59 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <cstdlib>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string const& name);
    ScavTrap(ScavTrap const& other);
    ScavTrap& operator=(ScavTrap const& other);
    ~ScavTrap();

    void challengeNewcomer(std::string const& target);
};

#endif
