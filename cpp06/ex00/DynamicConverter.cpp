/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DynamicConverter.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 11:48:33 by charles           #+#    #+#             */
/*   Updated: 2020/04/16 12:25:58 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DynamicConverter.hpp"

DynamicConverter(DynamicConverter const& other)
{
    *this = other;
}

DynamicConverter& operator=(DynamicConverter const& other)
{
    if (*this == other)
        return *this;
    m_origin = other.m_origin;
    m_type   = other.m_type;
    m_int    = other.m_int;
    m_char   = other.m_char;
    m_float  = other.m_float;
    m_double = other.m_double;
    return *this;
}

~DynamicConverter()
{}

DynamicConverter(std::string const& origin)
    : m_origin(origin)
{
    if (isCharLitteral(origin))
        m_type = DetectedTypeChar;
    else if (isIntLitteral(origin))
    else if (isFloatLitteral(origin))
    else if (isDoubleLitteral(origin))


}

bool isCharLitteral(std::string const& s)
{
    if (!origin.length() == 3 && origin[0] == '\'' && origin[2] == '\'');
}
