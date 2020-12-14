/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 10:54:10 by charles           #+#    #+#             */
/*   Updated: 2020/12/14 10:53:10 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <cctype>
#include <climits>
#include <cmath>

bool is_char(std::string input)
{
    return input.length() == 3 && input[0] == '\'' && input[2] == '\'';
}

bool is_int(std::string input)
{
    if (input[0] == '-' || input[0] == '+')
        input = input.substr(1);
    for (size_t i = 0; i < input.length(); i++)
        if (!isdigit(input[i]))
            return false;
    return true;
}

bool is_double(std::string input)
{
    if (input == "nan" || input == "+inf" || input == "-inf")
        return true;
    if (input[0] == '-' || input[0] == '+')
        input = input.substr(1);
    if (input.find('.') == std::string::npos ||
        input.find('.') != input.rfind('.') ||
        input.find('.') == 0 ||
        input.find('.') == input.length() - 1)
        return false;
    for (size_t i = 0; i < input.length(); i++)
    {
        if (input[i] == '.')
            continue;
        if (!isdigit(input[i]))
            return false;
    }
    return true;
}

bool is_float(std::string input)
{
    if (input[input.length() - 1] != 'f')
        return false;
    if (input == "nanf" || input == "+inff" || input == "-inff")
        return true;
    if (input.find('.') == std::string::npos)
        input.insert(input.length() - 1, ".0");
    return is_double(input.substr(0, input.length() - 1));
}

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
        std::cerr << "Litteral cannot be empty" << std::endl;
        return 1;
    }
    std::cout << std::setprecision(1) << std::fixed;

    double x;
    if (is_char(s))
        x = s[1];
    else if (is_int(s))
    {
        std::stringstream ss(s);
        ss >> x;
    }
    else if (is_float(s))
    {
        if (s == "nanf")
            x = NAN;
        else if (s == "+inff")
            x = INFINITY;
        else if (s == "-inff")
            x = -INFINITY;
        else
        {
            std::stringstream ss(s.substr(0, s.length() - 1));
            ss >> x;
        }
    }
    else if (is_double(s))
    {
        if (s == "nan")
            x = NAN;
        else if (s == "+inf")
            x = INFINITY;
        else if (s == "-inf")
            x = -INFINITY;
        else
        {
            std::stringstream ss(s);
            ss >> x;
        }
    }
    else
    {
        std::cerr << "Litteral `" << s << "` is not valid" << std::endl;
        return 1;
    }

    if (CHAR_MIN <= x && x <= CHAR_MAX && !std::isnan(x) && !std::isinf(x))
    {
        char c = static_cast<char>(x);
        if (std::isprint(c))
            std::cout << "char: '" << c << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    }
    else
        std::cout << "char: impossible" << std::endl;


    if (INT_MIN <= x && x <= INT_MAX && !std::isnan(x) && !std::isinf(x))
        std::cout << "int: " << static_cast<int>(x) << std::endl;
    else
        std::cout << "int: impossible" << std::endl;

    std::cout << "float: " << static_cast<float>(x) << 'f' << std::endl;
    std::cout << "double: " << x << std::endl;

    return 0;
}
