/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 16:42:54 by cacharle          #+#    #+#             */
/*   Updated: 2020/11/10 08:39:45 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
public:
    HumanB(std::string const& name);
    void attack();
    void setWeapon(Weapon const& weapon);
private:
    std::string   m_name;
    Weapon const* m_weapon;
};

#endif
