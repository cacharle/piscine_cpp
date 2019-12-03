#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int
main()
{
	std::string user_input;
	size_t found_index;
	PhoneBook phone_book = PhoneBook();

	while (true)
	{
		std::cin >> user_input;
		if (user_input == "EXIT")
			break;
		else if ((found_index = user_input.find("ADD")) == 0)
		{
			Contact tmp = Contact(user_input.substr(found_index));
			phone_book.add(tmp);
		}
		else if ((found_index = user_input.find("SEARCH")) == 0)
		{
			std::string searched = user_input.substr(found_index);
			Contact *result = phone_book.search(searched);
			if (result == NULL)
				std::cout << "Notfound: " << searched << std::endl;
			else
				std::cout << "Found: " << result->name
					      << " phone: " << result->phone_str() << std::endl;

		}
	}
	return 0;
}
