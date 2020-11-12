/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 12:15:47 by charles           #+#    #+#             */
/*   Updated: 2020/11/12 13:36:55 by cacharle         ###   ########.fr       */
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
    ~PlasmaRifle();

    virtual void attack() const;

private:
};


#endif
