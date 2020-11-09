/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 09:38:16 by charles           #+#    #+#             */
/*   Updated: 2020/11/09 10:27:15 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string const& name, std::string const& type)
    : m_name(name), m_type(type)
{
    announce();
}

Zombie::~Zombie()
{
	std::cout << "<" << m_name << " (" << m_type << ")> AAAAARG... ME DYING" << std::endl;
}

void Zombie::announce()
{
	std::cout << "<" << m_name << " (" << m_type << ")> Braiiiiiiinnnssss..." << std::endl;
}
