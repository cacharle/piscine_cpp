/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 13:44:35 by charles           #+#    #+#             */
/*   Updated: 2020/04/14 14:13:39 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(Character const& other)
{
    *this = other;
}

void Character::operator=(Character const& other)
{
    m_name = other.m_name;
}

Character::~Character()
{
}

Character::Character(std::string const& name) : m_name(name), m_ap(40), m_weapon(NULL)
{
}

void Character::recoverAP()
{
    m_ap += 10;
    if (m_ap > 40)
        m_ap = 40;
}

void Character::equip(AWeapon *weapon)
{
    m_weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
    if (m_weapon == NULL || m_ap < m_weapon->getAPCost())
        return;
    std::cout << m_name << " attacks " << enemy->getType() << " with a " << m_weapon->getName() << std::endl;
    m_weapon->attack();
    enemy->takeDamage(m_weapon->getDamage());
    if (enemy->getHP() <= 0)
        delete enemy;
    m_ap -= m_weapon->getAPCost();
}

std::string const& Character::getName() const
{
    return m_name;
}

int Character::getAP() const
{
    return m_ap;
}

AWeapon* Character::getWeapon() const
{
    return m_weapon;
}

std::ostream& operator<<(std::ostream& out, Character const& c)
{
    out << c.getName() << " has " << c.getAP();
    if (c.getWeapon() == NULL)
        out << " and is unarmed";
    else
        out << " and wields a " << c.getWeapon()->getName();
    out << std::endl;
    return out;
}
