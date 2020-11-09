/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 07:23:11 by charles           #+#    #+#             */
/*   Updated: 2020/11/09 12:04:19 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iomanip>
# include <iostream>
# include "utils.hpp"

class Contact
{
public:
    static Contact prompt();
    void           preview() const;
    void           put()     const;

private:
    static void        promptString(std::string promptString, std::string& s);
    static void        promptInt(std::string promptString, int& i);
    static std::string trimedName(std::string name);

    struct Address
    {
        int         m_houseNum;
        int         m_postCode;
        std::string m_street;
        std::string m_city;
    };

    struct Date
    {
        int         m_day;
        int         m_month;
        int         m_year;
    };

	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickname;
	std::string m_login;
	Address     m_address;
	std::string m_email;
	std::string m_phone;
	Date        m_birthday;
	std::string m_favMeal;
	std::string m_underwareColor;
	std::string m_darkestSecret;
};

#endif
