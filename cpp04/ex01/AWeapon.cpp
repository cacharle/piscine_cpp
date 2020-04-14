/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 12:16:04 by charles           #+#    #+#             */
/*   Updated: 2020/04/14 13:18:07 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(AWeapon const& other)
{
    *this = other;
}

void AWeapon::operator=(AWeapon const& other)
{
    m_name = other.m_name;
    m_apcost = other.m_apcost;
    m_damage = other.m_damage;
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(std::string const& name, int apcost, int damage)
    : m_name(name), m_apcost(apcost), m_damage(damage)
{
}

std::string const& AWeapon::getName() const
{
    return m_name;
}

int AWeapon::getAPCost() const
{
    return m_apcost;
}

int AWeapon::getDamage() const
{
    return m_damage;
}

AWeapon::AWeapon()
{
}
