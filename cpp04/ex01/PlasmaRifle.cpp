/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 13:07:24 by charles           #+#    #+#             */
/*   Updated: 2020/12/11 10:56:23 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle(PlasmaRifle const& other) : AWeapon(other) {}

PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const& other)
{
    AWeapon::operator=(other);
    return *this;
}

PlasmaRifle::~PlasmaRifle() {}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

/******************************************************************************/

ThisIsNotAPlasmaRifle::ThisIsNotAPlasmaRifle() : AWeapon("Not a Plasma Rifle", 5, 21) {}

ThisIsNotAPlasmaRifle::ThisIsNotAPlasmaRifle(ThisIsNotAPlasmaRifle const& other) : AWeapon(other) {}

ThisIsNotAPlasmaRifle& ThisIsNotAPlasmaRifle::operator=(ThisIsNotAPlasmaRifle const& other)
{
    AWeapon::operator=(other);
    return *this;
}

ThisIsNotAPlasmaRifle::~ThisIsNotAPlasmaRifle() {}

void ThisIsNotAPlasmaRifle::attack() const
{
    std::cout << "* not piouuu piouuu piouuu *" << std::endl;
}
