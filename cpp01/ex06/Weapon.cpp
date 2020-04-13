/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 16:36:23 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/13 10:25:35 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t)
    : type(t)
{
}

const std::string& Weapon::getType() const
{
	return type;
}

void Weapon::setType(const std::string& t)
{
	type = t;
}
