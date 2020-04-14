/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 20:42:22 by charles           #+#    #+#             */
/*   Updated: 2020/04/13 20:59:51 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) :
    m_name(name)
{
    std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

void Victim::operator=(Victim const& other)
{
    m_name = other.m_name;
}

Victim::Victim(Victim const& other)
{
    *this = other;
}

Victim::~Victim()
{
    std::cout << "Victim " << m_name << " just died for no apparent reason!" << std::endl;
}

std::string const& Victim::getName() const
{
    return m_name;
}

void Victim::getPolymorphed() const
{
    std::cout << m_name << " has been turned into a cute little sheep!" << std::endl;
}

Victim::Victim()
{
}

std::ostream& operator<<(std::ostream& out, Victim const& v)
{
    out << "I'm " << v.getName() << " and I like otters!" << std::endl;
    return out;
}
