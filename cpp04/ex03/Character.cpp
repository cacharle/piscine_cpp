/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 16:45:54 by charles           #+#    #+#             */
/*   Updated: 2020/11/15 17:10:46 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const& name)
    : m_name(name), m_inventory_size(0) {}

Character::Character(Character const& other)
    : m_inventory_size(0) { *this = other; }

Character& Character::operator=(Character const& other)
{
    destroyInventory();
    m_inventory_size = other.m_inventory_size;
    for (int i = 0; i < m_inventory_size; i++)
        m_inventory[i] = other.m_inventory[i]->clone();
    m_name = other.m_name;
    return *this;
}

Character::~Character() { destroyInventory(); }

std::string const& Character::getName() const { return m_name; }

void Character::equip(AMateria* m)
{
    if (m_inventory_size >= INVENTORY_MAX_SIZE || m == NULL)
        return;
    m_inventory[m_inventory_size] = m;
    m_inventory_size++;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= m_inventory_size)
        return;
    for (int i = idx; i < m_inventory_size - 1; i++)
        m_inventory[i] = m_inventory[i + 1];
    m_inventory_size--;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= m_inventory_size)
        return;
    m_inventory[idx]->use(target);
}

void Character::destroyInventory()
{
    for (int i = 0; i < m_inventory_size; i++)
        delete m_inventory[i];
}

Character::Character() {}
