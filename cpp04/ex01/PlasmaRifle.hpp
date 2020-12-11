/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 12:15:47 by charles           #+#    #+#             */
/*   Updated: 2020/12/11 10:55:04 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
    PlasmaRifle();
    PlasmaRifle(PlasmaRifle const& other);
    PlasmaRifle& operator=(PlasmaRifle const& other);
    virtual ~PlasmaRifle();

    virtual void attack() const;

private:
};

class ThisIsNotAPlasmaRifle : public AWeapon
{
public:
    ThisIsNotAPlasmaRifle();
    ThisIsNotAPlasmaRifle(ThisIsNotAPlasmaRifle const& other);
    ThisIsNotAPlasmaRifle& operator=(ThisIsNotAPlasmaRifle const& other);
    virtual ~ThisIsNotAPlasmaRifle();

    virtual void attack() const;

private:
};

#endif
