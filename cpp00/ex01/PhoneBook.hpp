/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 09:06:23 by charles           #+#    #+#             */
/*   Updated: 2020/11/09 09:28:38 by cacharle         ###   ########.fr       */
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
	void           add(Contact contact);
	Contact*       search(std::string needle);
    size_t         getSize() const;
    Contact const& get(size_t index) const;

private:
	Contact m_contacts[CONTACTS_SIZE];
	size_t  m_size;
};

std::ostream& operator<<(std::ostream& out, PhoneBook const& p);

#endif
