/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 07:23:13 by charles           #+#    #+#             */
/*   Updated: 2020/11/17 16:42:33 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : m_size(0) {}

void PhoneBook::add(Contact contact)
{
    if (m_size >= CONTACTS_SIZE)
    {
        return;
    }
	m_contacts[m_size] = contact;
	m_size++;
}

Contact const& PhoneBook::get(size_t index) const
{
	return m_contacts[index];
}

size_t PhoneBook::getSize() const
{
    return m_size;
}

std::ostream& operator<<(std::ostream& out, PhoneBook const& p)
{
    for (size_t i = 0; i < p.getSize(); i++)
    {
        out << std::setw(10) << i << "|";
        p.get(i).preview();
        std::cout << std::endl;
    }
    return out;
}
