/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 09:06:23 by charles           #+#    #+#             */
/*   Updated: 2020/04/13 09:06:39 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# define CONTACTS_SIZE 8

# include <string>
# include "Contact.hpp"

class PhoneBook
{
public:
	PhoneBook();
	void add(Contact contact);
	Contact* search(std::string needle);
    size_t getSize() const;
    Contact const &get(int index) const;

private:
	Contact m_contacts[CONTACTS_SIZE];
	int m_size;
};

std::ostream &operator<<(std::ostream &out, PhoneBook const &p);

#endif
