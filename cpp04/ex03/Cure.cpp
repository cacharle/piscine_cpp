/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 17:38:01 by charles           #+#    #+#             */
/*   Updated: 2020/11/12 15:43:44 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(Cure const& other) { *this = other; }

Cure& Cure::operator=(Cure const& other)
{
    AMateria::operator=(other);
    return *this;
}

Cure::~Cure() {}

AMateria* Cure::clone() const { return new Cure(*this); }

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
