/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 09:06:06 by charles           #+#    #+#             */
/*   Updated: 2020/04/13 09:33:59 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(int weight, int maxSpeed)
    : m_weight(weight), m_maxSpeed(maxSpeed)
{
}

void Pony::sayHello()
{
	std::cout << "Hi, I'm a pony, I weight " << m_weight
              << " and my speed limit is "   << m_maxSpeed
              << std::endl;
}

void Pony::run()
{
	for (int i = 0; i <= m_maxSpeed; i += m_maxSpeed / 10)
		std::cout << "I'm running really fast at " << i
                  << ", look at me!" << std::endl;
}
