/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 15:08:35 by charles           #+#    #+#             */
/*   Updated: 2020/11/17 09:25:58 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
    : m_units(new ISpaceMarine*[0]), m_size(0) {}

Squad::Squad(Squad const& other)
    : m_units(NULL), m_size(0) { *this = other; }

Squad& Squad::operator=(Squad const& other)
{
    destroyUnits();
    m_size  = other.m_size;
    m_units = new ISpaceMarine*[m_size];
    for (int i = 0; i < m_size; i++)
        m_units[i] = other.m_units[i]->clone();
    return *this;
}

Squad::~Squad() { destroyUnits(); }

int Squad::getCount() const { return m_size; }

ISpaceMarine* Squad::getUnit(int n) const
{
    if (n < 0 || n >= m_size)
        return NULL;
    return m_units[n];
}

int Squad::push(ISpaceMarine* spaceMarine)
{
    if (spaceMarine == NULL)
        return (-1);
    for (int i = 0; i < m_size; i++)
        if (m_units[i] == spaceMarine)
            return (-1);

    ISpaceMarine** new_units = new ISpaceMarine*[m_size + 1];
    for (int i = 0; i < m_size; i++)
        new_units[i] = m_units[i];
    new_units[m_size] = spaceMarine;
    delete [] m_units;
    m_size++;
    m_units = new_units;
    return m_size;
}

void Squad::destroyUnits()
{
    if (m_units == NULL)
        return;
    for (int i = 0; i < m_size; i++)
        delete m_units[i];
    delete [] m_units;
}
