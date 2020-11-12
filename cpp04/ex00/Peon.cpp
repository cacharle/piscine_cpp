/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 20:53:16 by charles           #+#    #+#             */
/*   Updated: 2020/11/12 13:01:42 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string const& name) : Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon& Peon::operator=(Peon const& other)
{
    Victim::operator=(other);
    return *this;
}

Peon::Peon(Peon const& other) : Victim(other) {}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
    std::cout << m_name << " has been turned into a pink pony!" << std::endl;
}
