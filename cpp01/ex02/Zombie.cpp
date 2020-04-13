/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 09:38:16 by charles           #+#    #+#             */
/*   Updated: 2020/04/13 09:40:20 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
    : m_name(name), m_type(type)
{
	announce();
}

void Zombie::announce()
{
	std::cout << "<" << m_name << " (" << m_type << ")> Braiiiiiiinnnssss..." << std::endl;
}
