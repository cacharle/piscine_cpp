/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 09:05:59 by charles           #+#    #+#             */
/*   Updated: 2020/04/13 09:17:57 by charles          ###   ########.fr       */
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

    std::cout << "address:" << std::endl;
    Contact::promptInt("|  house number: ", c.m_address.m_houseNum);
    Contact::promptInt("|  post code:    ", c.m_address.m_postCode);
    Contact::promptString("|  street name:  ", c.m_address.m_street);
    Contact::promptString("|  city:         ", c.m_address.m_city);

    Contact::promptString("email:      ", c.m_email);
    Contact::promptString("phone:      ", c.m_phone);

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
    std::cout << promptString << std::flush;
    getline(std::cin, s);
}

void Contact::promptInt(std::string promptString, int &i)
{
    std::cout << promptString << std::flush;
    i = getInt();
    while (i == -1)
    {
        std::cout << "Error: Not a valid number, please try again" << std::endl;
        i = getInt();
    }
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
        << std::setw(10) << trimedName(m_lastName) << "|"
        << std::setw(10) << trimedName(m_nickname);
}

void Contact::put() const
{
    std::cout << m_firstName      << std::endl;
    std::cout << m_lastName       << std::endl;
    std::cout << m_nickname       << std::endl;
    std::cout << m_login          << std::endl;

    std::cout << "Street " << m_address.m_street
        << " Nb "    << m_address.m_houseNum
        << " "       << m_address.m_postCode
        << " "       << m_address.m_city
        << std::endl;

    std::cout << m_email          << std::endl;
    std::cout << m_phone          << std::endl;

    std::cout << m_birthday.m_day
        << "/" << m_birthday.m_month
        << "/" << m_birthday.m_year
        << std::endl;

    std::cout << m_favMeal        << std::endl;
    std::cout << m_underwareColor << std::endl;
    std::cout << m_darkestSecret  << std::endl;
}
