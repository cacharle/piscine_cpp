/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 11:45:18 by charles           #+#    #+#             */
/*   Updated: 2020/11/08 13:38:40 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : m_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

void Fixed::operator=(Fixed const& other)
{
    std::cout << "Assignation operator called" << std::endl;
    m_value = other.getRawBits();
}

Fixed::Fixed(const int from)
{
    std::cout << "Int constructor called" << std::endl;
    m_value = from << m_fractionalBits;
}

Fixed::Fixed(const float from)
{
    std::cout << "Float constructor called" << std::endl;
    m_value = roundf(from * (1 << m_fractionalBits));
}

int Fixed::getRawBits() const
{
    return m_value;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    m_value = raw;
}

float Fixed::toFloat() const
{
    return (float)m_value / (float)(1 << m_fractionalBits);
}

int Fixed::toInt() const
{
    return roundf(toFloat());
}

int Fixed::getFractionalBits()
{
    return m_fractionalBits;
}

std::ostream& operator<<(std::ostream& out, Fixed const& f)
{
    out << f.toFloat();
    return out;
}
