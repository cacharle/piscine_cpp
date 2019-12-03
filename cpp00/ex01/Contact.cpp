#include <string>
#include "Contact.hpp"

Contact::Contact(std::string name)
{
	this->name = name;
}

std::string
Contact::phone_str()
{
	std::string s;
	for (int i = 0; i < 10; i++)
		s.push_back(phone[i] - '0');
	return s;
}
