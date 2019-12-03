#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
public:
	Contact(std::string name);
	// std::string phone_str();

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email;
	std::string phone;
	std::string birthday;
	std::string fav_meal;
	std::string underware_color;
	std::string darkest_secret;
};

#endif  // CONTACT_HPP
