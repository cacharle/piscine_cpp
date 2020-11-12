/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 13:14:42 by charles           #+#    #+#             */
/*   Updated: 2020/11/12 13:40:00 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
    PowerFist();
    PowerFist(PowerFist const& other);
    PowerFist& operator=(PowerFist const& other);
    ~PowerFist();

    virtual void attack() const;

private:
};

#endif
