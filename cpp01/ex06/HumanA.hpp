/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 16:37:23 by cacharle          #+#    #+#             */
/*   Updated: 2020/11/10 08:34:26 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
public:
    HumanA(std::string const& name, Weapon const& weapon);
    void attack();
private:
    std::string   m_name;
    Weapon const& m_weapon;
};

#endif
