/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 20:53:16 by charles           #+#    #+#             */
/*   Updated: 2020/12/11 10:17:35 by cacharle         ###   ########.fr       */
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

Peon::Peon(Peon const& other) : Victim(other)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
    std::cout << m_name << " has been turned into a pink pony!" << std::endl;
}

/************************************************************************************/

Rat::Rat(std::string const& name) : Victim(name)
{
    std::cout << "Rats rats, everywhere you look, everywhere you turn there is rats." << std::endl;
}

Rat& Rat::operator=(Rat const& other)
{
    Victim::operator=(other);
    return *this;
}

Rat::Rat(Rat const& other) : Victim(other)
{
    std::cout << "Rats rats, everywhere you look, everywhere you turn there is rats." << std::endl;
}

Rat::~Rat()
{
    std::cout << "I'll stop runing everything now" << std::endl;
}

void Rat::getPolymorphed() const
{
    std::cout << m_name << " has been turned into Ninja" << std::endl;
}
