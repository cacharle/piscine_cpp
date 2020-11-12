/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 10:54:10 by charles           #+#    #+#             */
/*   Updated: 2020/11/11 09:21:08 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " litteral" << std::endl;
        return 1;
    }


    std::string s(argv[1]);

    if (s.empty())
    {
        std::cerr << "Cannot be empty" << std::endl;
        return 1;
    }

    bool negative = false;
    if (s[0] == '-' || s[0] == '+')
    {
        if (s[0] == '-')
            negative = true;
        s.erase(0, 1);
    }

    char   c;
    int    i;
    float  f;
    double d;

    if (s == "nan" || s == "inf")
    {
        d = s == "nan" ? NaN : inf;
        if (negative)
            d = -d;
        f = static_cast<float>(d);
        i = static_cast<int>(d);
        c = static_cast<char>(d);
    }
    if (s == "nanf" || s == "inff")
    {
        f = s == "nanf" ? NaN : inff;
        if (negative)
            f = -f;
        d = static_cast<double>(f);
        i = static_cast<int>(f);
        c = static_cast<char>(f);
    }

    if (isdigit(s[0]))
    {
        std::stringstream ss(s);

        if (s.find(".") == -1)
        {
            ss >> i;
            d = static_cast<double>(i);
            f = static_cast<float>(i);
            c = static_cast<char>(i);
        }
        else if (s.find("f") != -1)
        {
            ss >> f;
            d = static_cast<double>(f);
            i = static_cast<int>(f);
            c = static_cast<char>(f);
        }
        else
        {
            ss >> d;
            f = static_cast<float>(d);
            i = static_cast<int>(d);
            c = static_cast<char>(d);
        }
    }
    else if (!negative && s.length == 1)
    {
        c = s[0];
        d = static_cast<double>(c);
        f = static_cast<float>(c);
        i = static_cast<int>(c);
    }
    else
    {
        std::cout << "Parsing error" << std::endl;
        return 1;
    }


    return 0;
}
