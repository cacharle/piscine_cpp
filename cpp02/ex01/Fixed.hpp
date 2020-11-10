/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 11:40:49 by charles           #+#    #+#             */
/*   Updated: 2020/11/10 10:02:06 by cacharle         ###   ########.fr       */
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

    int   getRawBits() const;
    void  setRawBits(int const raw);

    float toFloat(void) const;  // void asked by subject
    int   toInt(void)   const;

    static int getFractionalBits();

private:
    int              m_value;
    static int const m_fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& out, Fixed const& f);

#endif
