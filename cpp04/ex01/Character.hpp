/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 13:42:25 by charles           #+#    #+#             */
/*   Updated: 2020/11/13 11:14:03 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
public:
    Character(Character const& other);
    Character& operator=(Character const& other);
    ~Character();

    Character(std::string const& name);
    void recoverAP();
    void equip(AWeapon *weapon);
    void attack(Enemy *enemy);
    std::string const& getName() const;
    int getAP() const;
    AWeapon* getWeapon() const;

private:
    Character();

    std::string m_name;
    int         m_ap;
    AWeapon*    m_weapon;
};

std::ostream& operator<<(std::ostream& out, Character const& c);

#endif
