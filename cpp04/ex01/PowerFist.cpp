/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 13:15:42 by charles           #+#    #+#             */
/*   Updated: 2020/11/12 13:40:53 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist(PowerFist const& other) : AWeapon(other) {}

PowerFist& PowerFist::operator=(PowerFist const& other)
{
    AWeapon::operator=(other);
    return *this;
}

PowerFist::~PowerFist() {}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}
