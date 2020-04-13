/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 07:31:30 by charles           #+#    #+#             */
/*   Updated: 2020/04/13 08:43:18 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int getInt()
{
    std::string s;
    int tmp;

    std::cin >> s;
    for (size_t i = 0; i < s.length(); i++)
        if (!isdigit(s[i]))
            return (-1);
    std::istringstream(s) >> tmp;
    return tmp;
}
