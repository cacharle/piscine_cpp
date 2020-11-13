/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 16:26:57 by charles           #+#    #+#             */
/*   Updated: 2020/11/13 14:26:28 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(AMateria const& other) : m_type(other.m_type)
{
    *this = other;
}

AMateria& AMateria::operator=(AMateria const& other)
{
    _xp    = other._xp;
    // subject doesn't want type to be copied
    return *this;
}

AMateria::~AMateria() {}

AMateria::AMateria(std::string const& type) : m_type(type), _xp(0) {}

std::string const& AMateria::getType() const { return m_type; }
unsigned int       AMateria::getXP()   const { return _xp;    }

void AMateria::use(ICharacter& target)
{
    (void)target;
    _xp += 10;
}

AMateria::AMateria() {}
