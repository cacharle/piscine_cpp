/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 11:45:18 by charles           #+#    #+#             */
/*   Updated: 2020/11/10 12:00:43 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : m_value(0) {}

Fixed::Fixed(Fixed const& other) { *this = other; }

Fixed::~Fixed() {}

Fixed& Fixed::operator=(Fixed const& other)
{
    m_value = other.getRawBits();
    return *this;
}

Fixed::Fixed(const int from)
{
    m_value = from << m_fractionalBits;
}

Fixed::Fixed(const float from)
{
    m_value = roundf(from * (1 << m_fractionalBits));
}

int Fixed::getRawBits() const
{
    return m_value;
}

void Fixed::setRawBits(int const raw)
{
    m_value = raw;
}

float Fixed::toFloat() const
{
    return (float)m_value / (float)(1 << m_fractionalBits);
}

int Fixed::toInt() const
{
    return m_value >> m_fractionalBits;
}

Fixed Fixed::operator+(Fixed const& other) const { return Fixed(toFloat() + other.toFloat()); }
Fixed Fixed::operator-(Fixed const& other) const { return Fixed(toFloat() - other.toFloat()); }
Fixed Fixed::operator*(Fixed const& other) const { return Fixed(toFloat() * other.toFloat()); }
Fixed Fixed::operator/(Fixed const& other) const { return Fixed(toFloat() / other.toFloat()); }

Fixed& Fixed::operator++()    { m_value++; return *this;                   }
Fixed& Fixed::operator--()    { m_value++; return *this;                   }
Fixed  Fixed::operator++(int) { Fixed copy(*this); m_value++; return copy; }
Fixed  Fixed::operator--(int) { Fixed copy(*this); m_value--; return copy; }

bool Fixed::operator<(Fixed const& other)  const { return m_value < other.m_value;         }
bool Fixed::operator>(Fixed const& other)  const { return m_value > other.m_value;         }
bool Fixed::operator<=(Fixed const& other) const { return *this < other || *this == other; }
bool Fixed::operator>=(Fixed const& other) const { return *this > other || *this == other; }
bool Fixed::operator==(Fixed const& other) const { return m_value == other.m_value;        }
bool Fixed::operator!=(Fixed const& other) const { return !(*this == other);               }

Fixed&       Fixed::max(Fixed& a, Fixed& b)             { return a > b ? a : b; }
Fixed&       Fixed::min(Fixed& a, Fixed& b)             { return a < b ? a : b; }
Fixed const& Fixed::max(Fixed const& a, Fixed const& b) { return a > b ? a : b; }
Fixed const& Fixed::min(Fixed const& a, Fixed const& b) { return a < b ? a : b; }

std::ostream& operator<<(std::ostream& out, Fixed const& f)
{
    out << f.toFloat();
    return out;
}
