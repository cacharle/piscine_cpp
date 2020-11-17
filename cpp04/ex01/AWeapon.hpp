/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 11:22:06 by charles           #+#    #+#             */
/*   Updated: 2020/11/17 08:53:43 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>

class AWeapon
{
public:
    AWeapon(AWeapon const& other);
    AWeapon& operator=(AWeapon const& other);
    virtual ~AWeapon();

    AWeapon(std::string const& name, int apcost, int damage);
    std::string const& getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;

protected:
    std::string m_name;
    int         m_apcost;
    int         m_damage;

private:
    AWeapon();
};

#endif
