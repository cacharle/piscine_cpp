/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 11:45:18 by charles           #+#    #+#             */
/*   Updated: 2020/04/13 13:02:27 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
    : m_value(0)
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

Fixed::Fixed(int from)
{
    std::cout << " constructor called" << std::endl;
    m_value = from << m_fractionalBits;
}

Fixed::Fixed(float from)
{
    m_value = 0;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return m_value;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    m_value = raw;
}

float Fixed::toFloat() const
{
    return 0;
}

int Fixed::toInt() const
{
    return m_value >> m_fractionalBits;
}

int Fixed::getFractionalBits()
{
    return m_fractionalBits;
}

std::ostream& operator<<(std::ostream& out, Fixed const& f)
{
    int dec_part;
    int shift_size;

    shift_size = (sizeof(int) * 8) - Fixed::getFractionalBits();
    dec_part = f.getRawBits() << shift_size >> shift_size;
    out << f.toInt() << '.' << dec_part;
    return out;
}
