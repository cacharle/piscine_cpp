/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 07:31:30 by charles           #+#    #+#             */
/*   Updated: 2020/11/09 12:10:25 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int getInt()
{
    std::string s;
    int         tmp;

    std::getline(std::cin, s);
    if (s.empty())
        return (-1);
    for (size_t i = 0; i < s.length(); i++)
        if (!isdigit(s[i]))
            return (-1);
    std::istringstream(s) >> tmp;
    return tmp;
}
