/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 16:26:57 by charles           #+#    #+#             */
/*   Updated: 2020/11/12 15:40:23 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(AMateria const& other)
{
    *this = other;
    m_type = "";
}

AMateria& AMateria::operator=(AMateria const& other)
{
    _xp = other._xp;
    return *this;
}

AMateria::~AMateria() {}

AMateria::AMateria(std::string const& type) : m_type(type), _xp(0) {}

std::string const& AMateria::getType() const
{
    return m_type;
}

unsigned int AMateria::getXP() const { return _xp; }

void AMateria::use(ICharacter& target) { _xp += 10; }

AMateria::AMateria() {}
