/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 11:22:06 by charles           #+#    #+#             */
/*   Updated: 2020/04/14 14:33:07 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>

class AWeapon
{
public:
    AWeapon(AWeapon const& other);
    void operator=(AWeapon const& other);
    virtual ~AWeapon();

    AWeapon(std::string const& name, int apcost, int damage);
    std::string const& getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;

protected:
    AWeapon();
    std::string m_name;
    int m_apcost;
    int m_damage;
};

#endif
