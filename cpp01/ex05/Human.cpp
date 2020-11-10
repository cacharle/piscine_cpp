/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 12:52:38 by cacharle          #+#    #+#             */
/*   Updated: 2020/11/10 08:31:38 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() : m_brain() {}

std::string	Human::identify() const
{
	return m_brain.identify();
}

Brain const& Human::getBrain() const
{
	return m_brain;
}
