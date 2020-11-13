/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 15:31:43 by charles           #+#    #+#             */
/*   Updated: 2020/11/13 12:18:14 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const& other)
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
    *this = other;
}

TacticalMarine& TacticalMarine::operator=(TacticalMarine const& other)
{
    (void)other;
    return *this;
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh..." << std::endl;
}

ISpaceMarine* TacticalMarine::clone() const
{
    ISpaceMarine* cloned = new TacticalMarine(*this);
    return cloned;
}

void TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with a botler *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with a chainsword *" << std::endl;
}
