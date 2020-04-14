/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 16:26:57 by charles           #+#    #+#             */
/*   Updated: 2020/04/14 16:35:09 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(AMateria const& other)
{
    *this = other;
    m_type = "";
}

void AMateria::operator=(AMateria const& other)
{
    _xp = other._xp;
}

AMateria::~AMateria()
{
}

AMateria::AMateria(std::string const& type)
    : m_type(type), _xp(0)
{
}

std::string const& AMateria::getType() const
{
    return m_type;
}

unsigned int AMateria::getXP() const
{
    return _xp;
}

void AMateria::use(ICharacter& target)
{
    _xp += 10;
}

AMateria::AMateria()
{
}
