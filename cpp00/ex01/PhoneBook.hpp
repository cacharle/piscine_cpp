#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# define CONTACTS_SIZE 8

# include <string>
# include "Contact.hpp"

class PhoneBook
{
public:
	PhoneBook();
	bool add(Contact contact);
	Contact* search(std::string needle);
private:
	Contact contacts[CONTACTS_SIZE];
	int contacts_len;
};

#endif  // PHONE_BOOK_HPP
