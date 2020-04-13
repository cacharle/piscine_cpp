/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 07:23:13 by charles           #+#    #+#             */
/*   Updated: 2020/04/13 08:43:05 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): m_size(0)
{
}

void PhoneBook::add(Contact contact)
{
	m_contacts[m_size] = contact;
	m_size++;
}

Contact const &PhoneBook::get(int index) const
{
	return m_contacts[index];
}

size_t PhoneBook::getSize() const
{
    return m_size;
}

std::ostream &operator<<(std::ostream &out, PhoneBook const &p)
{
    for (size_t i = 0; i < p.getSize(); i++)
    {
        out << i << "|";
        p.get(i).preview();
        std::cout << std::endl;
    }
    return out;
}
