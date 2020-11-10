/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 11:40:49 by charles           #+#    #+#             */
/*   Updated: 2020/11/10 11:06:40 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
public:
    Fixed();
    Fixed(Fixed const& other);
    ~Fixed();
    Fixed& operator=(Fixed const& other);

    Fixed(const int   from);
    Fixed(const float from);

    int  getRawBits() const;
    void setRawBits(int const raw);

    float toFloat() const;
    int   toInt()   const;

    Fixed operator+(Fixed const& other) const;
    Fixed operator-(Fixed const& other) const;
    Fixed operator*(Fixed const& other) const;
    Fixed operator/(Fixed const& other) const;

    Fixed& operator++();
    Fixed& operator--();
    Fixed  operator++(int);
    Fixed  operator--(int);

    bool operator<(Fixed const& other)  const;
    bool operator>(Fixed const& other)  const;
    bool operator<=(Fixed const& other) const;
    bool operator>=(Fixed const& other) const;
    bool operator==(Fixed const& other) const;
    bool operator!=(Fixed const& other) const;

    static Fixed& max(Fixed& a, Fixed& b);
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& max(Fixed const& a, Fixed const& b);
    static const Fixed& min(Fixed const& a, Fixed const& b);

private:
    int              m_value;
    static int const m_fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& out, Fixed const& f);

#endif
