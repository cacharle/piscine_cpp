/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 13:14:42 by charles           #+#    #+#             */
/*   Updated: 2020/04/14 14:04:27 by charles          ###   ########.fr       */
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
    void operator=(PowerFist const& other);
    ~PowerFist();

    virtual void attack() const;

private:
};

#endif
