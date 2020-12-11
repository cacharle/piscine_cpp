/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 13:36:11 by charles           #+#    #+#             */
/*   Updated: 2020/12/11 10:54:28 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const& other) : Enemy(other)
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion& RadScorpion::operator=(RadScorpion const& other)
{
    Enemy::operator=(other);
    return *this;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}

/*****************************************************************************/

NotSoRadScorpion::NotSoRadScorpion() : Enemy(80, "NotSoRadScorpion")
{
    std::cout << "* not so click click click *" << std::endl;
}

NotSoRadScorpion::NotSoRadScorpion(NotSoRadScorpion const& other) : Enemy(other)
{
    std::cout << "* not so click click click *" << std::endl;
}

NotSoRadScorpion& NotSoRadScorpion::operator=(NotSoRadScorpion const& other)
{
    Enemy::operator=(other);
    return *this;
}

NotSoRadScorpion::~NotSoRadScorpion()
{
    std::cout << "* SPROTCH (fuck this correction pdf) *" << std::endl;
}
