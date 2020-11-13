/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 15:47:06 by charles           #+#    #+#             */
/*   Updated: 2020/11/13 12:19:15 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const& other)
{
    std::cout << "* teleports from space *" << std::endl;
    *this = other;
}

AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const& other)
{
    (void)other;
    return *this;
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I'll be back..." << std::endl;
}

ISpaceMarine* AssaultTerminator::clone() const
{
    ISpaceMarine* cloned = new AssaultTerminator(*this);
    return cloned;
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}
