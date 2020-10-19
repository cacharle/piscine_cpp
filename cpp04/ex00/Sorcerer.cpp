/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 20:29:19 by charles           #+#    #+#             */
/*   Updated: 2020/04/13 20:49:48 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title):
    m_name(name),
    m_title(title)
{
    std::cout << name << ", " << title << ", is born!" << std::endl;
}

void Sorcerer::operator=(Sorcerer const& other)
{
    m_name = other.m_name;
    m_title = other.m_title;
}

Sorcerer::Sorcerer(Sorcerer const& other)
{
    *this = other;
}

Sorcerer::~Sorcerer()
{
    std::cout << m_name << ", " << m_title
              << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string const& Sorcerer::getName() const
{
    return m_name;
}

std::string const& Sorcerer::getTitle() const
{
    return m_title;
}

void Sorcerer::polymorph(Victim const& v) const
{
    v.getPolymorphed();
}

Sorcerer::Sorcerer()
{
}

std::ostream& operator<<(std::ostream& out, Sorcerer const& s)
{
    out << "I am " << s.getName() << ", " << s.getTitle()
        << ", and I like ponies!" << std::endl;
    return out;
}