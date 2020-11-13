/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 17:19:10 by charles           #+#    #+#             */
/*   Updated: 2020/11/13 14:40:54 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : m_learned_size(0) {}

MateriaSource::MateriaSource(MateriaSource const& other)
    : m_learned_size(0) { *this = other; }

MateriaSource& MateriaSource::operator=(MateriaSource const& other)
{
    destroyLearned();
    m_learned_size = other.m_learned_size;
    for (int i = 0; i < m_learned_size; i++)
        m_learned[i] = other.m_learned[i]->clone();
    return *this;
}

MateriaSource::~MateriaSource() { destroyLearned(); }

void MateriaSource::learnMateria(AMateria* materia)
{
    if (m_learned_size >= 4)
        return;
    m_learned[m_learned_size] = materia->clone();
    m_learned_size++;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    for (int i = 0; i < m_learned_size; i++)
        if (m_learned[i]->getType() == type)
            return m_learned[i]->clone();
    return NULL;
}

void MateriaSource::destroyLearned()
{
    for (int i = 0; i < m_learned_size; i++)
        delete m_learned[i];
}
