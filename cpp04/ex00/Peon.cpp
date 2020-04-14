/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 20:53:16 by charles           #+#    #+#             */
/*   Updated: 2020/04/13 21:00:23 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name):
    Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

void Peon::operator=(Peon const& other)
{
    m_name = other.m_name;
}

Peon::Peon(Peon const& other)
    : Victim(other)
{
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
    std::cout << m_name << " has been turned into a pink pony!" << std::endl;
}
