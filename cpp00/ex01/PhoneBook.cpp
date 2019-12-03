#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	contacts_len = 0;
}

bool
PhoneBook::add(Contact contact)
{
	if (contacts_len >= CONTACTS_SIZE)
		return false;
	contacts[contacts_len] = contact;
	contacts_len++;
	return true;
}

Contact*
PhoneBook::search(std::string needle)
{
	for (int i = 0; i < contacts_len; i++)
		if (needle == contacts[i].name)
			return contacts + i;
	return NULL;
}
