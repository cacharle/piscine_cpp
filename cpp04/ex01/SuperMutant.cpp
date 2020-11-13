/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 13:30:47 by charles           #+#    #+#             */
/*   Updated: 2020/11/13 10:35:24 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const& other) : Enemy(other)
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant& SuperMutant::operator=(SuperMutant const& other)
{
    Enemy::operator=(other);
    return *this;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int amount)
{
    if (amount < 0)
        amount = 3;
    Enemy::takeDamage(amount - 3);
}
