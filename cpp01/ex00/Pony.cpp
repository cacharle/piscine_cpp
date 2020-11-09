/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 09:06:06 by charles           #+#    #+#             */
/*   Updated: 2020/11/09 09:57:26 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string const& name, int weight, int maxSpeed)
    : m_name(name), m_weight(weight), m_maxSpeed(maxSpeed)
{
    std::cout << "Hey there, my name is " << m_name << " and you?" << std::endl;
}

Pony::~Pony()
{
    std::cout << "Oh no, I'M DYING! They called me " << m_name << "." << std::endl;
}

void Pony::sayHello()
{
	std::cout << "Hi, I'm " << m_name
              << ", I weight " << m_weight
              << " and my speed limit is " << m_maxSpeed
              << std::endl;
}

void Pony::run()
{
	for (int i = 0; i <= m_maxSpeed; i += m_maxSpeed / 10)
		std::cout << m_name << " is running really fast at " << i
                  << ", look at him!" << std::endl;
}
