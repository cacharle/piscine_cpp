/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 16:32:27 by charles           #+#    #+#             */
/*   Updated: 2020/11/13 14:06:33 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(Ice const& other) : AMateria(other) {}

Ice& Ice::operator=(Ice const& other)
{
    AMateria::operator=(other);
    return *this;
}

Ice::~Ice() {}

AMateria* Ice::clone() const { return new Ice(*this); }

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    AMateria::use(target);
}
