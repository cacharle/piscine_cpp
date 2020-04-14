/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 13:23:47 by charles           #+#    #+#             */
/*   Updated: 2020/04/14 14:11:19 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(Enemy const& other)
{
    *this = other;
}

void Enemy::operator=(Enemy const& other)
{
    m_hp = other.m_hp;
    m_type = other.m_type;
}

Enemy::~Enemy()
{
}

Enemy::Enemy(int hp, std::string const& type)
    : m_hp(hp), m_type(type)
{
}

std::string const& Enemy::getType() const
{
    return m_type;
}

int Enemy::getHP() const
{
    return m_hp;
}

void Enemy::takeDamage(int amount)
{
    if (amount < 0)
        return;
    m_hp -= amount;
}

Enemy::Enemy()
{
}
