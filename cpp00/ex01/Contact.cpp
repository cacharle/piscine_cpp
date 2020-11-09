/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 09:05:59 by charles           #+#    #+#             */
/*   Updated: 2020/11/09 12:30:12 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact Contact::prompt()
{
    Contact c;

    Contact::promptString("first name: ", c.m_firstName);
    Contact::promptString("last name:  ", c.m_lastName);
    Contact::promptString("nickname:   ", c.m_nickname);
    Contact::promptString("login:      ", c.m_login);

    if (std::cin.good())
        std::cout << "address:" << std::endl;
    Contact::promptInt("|  house number: ", c.m_address.m_houseNum);
    Contact::promptInt("|  post code:    ", c.m_address.m_postCode);
    Contact::promptString("|  street name:  ", c.m_address.m_street);
    Contact::promptString("|  city:         ", c.m_address.m_city);

    Contact::promptString("email:      ", c.m_email);
    Contact::promptString("phone:      ", c.m_phone);

    if (std::cin.good())
        std::cout << "birthday:" << std::endl;
    Contact::promptInt("|  day:           ", c.m_birthday.m_day);
    Contact::promptInt("|  month:         ", c.m_birthday.m_month);
    Contact::promptInt("|  year:          ", c.m_birthday.m_year);

    Contact::promptString("favorite meal:   ", c.m_favMeal);
    Contact::promptString("underware color: ", c.m_underwareColor);
    Contact::promptString("darkest secret:  ", c.m_darkestSecret);
    return c;
}

void Contact::promptString(std::string promptString, std::string &s)
{
    do
    {
        if (!std::cin.good())
        {
            s = "";
            return;
        }
        std::cout << promptString << std::flush;
        std::getline(std::cin, s);
        if (!std::cin.good())
        {
            s = "";
            return;
        }
        if (s.empty())
            std::cout << "Error: input can't be empty" << std::endl;
    }
    while (s.empty());

}

void Contact::promptInt(std::string promptString, int &i)
{
    do
    {
        if (!std::cin.good())
        {
            i = -1;
            return;
        }
        std::cout << promptString << std::flush;
        i = getInt();
        if (!std::cin.good())
        {
            i = -1;
            return;
        }
        if (i == -1)
            std::cout << "Error: Not a valid number, please try again" << std::endl;
    }
    while (i == -1);
}

std::string Contact::trimedName(std::string name)
{
    if (name.length() > 10)
        return name.substr(0, 9) + ".";
    return name;
}

void Contact::preview() const
{
    std::cout << std::setw(10) << trimedName(m_firstName) << "|"
              << std::setw(10) << trimedName(m_lastName)  << "|"
              << std::setw(10) << trimedName(m_nickname);
}

void Contact::put() const
{
    std::cout << "first name:      " << m_firstName << std::endl;
    std::cout << "last name:       " << m_lastName  << std::endl;
    std::cout << "nickname:        " << m_nickname  << std::endl;
    std::cout << "login:           " << m_login     << std::endl;

    std::cout << "address:         "
              << "Street " << m_address.m_street
              << " Nb "    << m_address.m_houseNum
              << " "       << m_address.m_postCode
              << " "       << m_address.m_city
              << std::endl;

    std::cout << "email:           " << m_email << std::endl;
    std::cout << "phone:           " << m_phone << std::endl;

    std::cout << "birthday:        "
              << m_birthday.m_day   << "/"
              << m_birthday.m_month << "/"
              << m_birthday.m_year
              << std::endl;

    std::cout << "favourite meal:  " << m_favMeal        << std::endl;
    std::cout << "underware color: " << m_underwareColor << std::endl;
    std::cout << "dardest secret:  " << m_darkestSecret  << std::endl;
}
