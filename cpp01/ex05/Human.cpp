/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 12:52:38 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/13 10:09:03 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
    : m_brain()
{
}

std::string	Human::identify()
{
	return m_brain.identify();
}

const Brain& Human::getBrain()
{
	return m_brain;
}
