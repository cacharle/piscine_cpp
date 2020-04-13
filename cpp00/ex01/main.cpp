/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 07:23:15 by charles           #+#    #+#             */
/*   Updated: 2020/04/13 09:18:04 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "utils.hpp"

int main()
{
    std::string input;
    PhoneBook phoneBook;
    int tmp;

    while (true)
    {
        std::cout << "> " << std::flush;
        if (!std::getline(std::cin, input))
            break;
        std::cout.flush();
        if (input == "EXIT")
            break;
        else if (input == "ADD")
        {
            if (phoneBook.getSize() >= 8)
                std::cout << "Error: Phonebook is full" << std::endl;
            else
                phoneBook.add(Contact::prompt());
            std::cout << std::flush;
        }
        else if (input == "SEARCH")
        {
            std::cout << phoneBook << std::flush;
            tmp = getInt();
            if (tmp < 0 || size_t(tmp) >= phoneBook.getSize())
                std::cout << "Error: Not valid index: " << tmp << std::endl;
            else
                phoneBook.get(tmp).put();
            std::cout << std::flush;
        }
    }
    return 0;
}
