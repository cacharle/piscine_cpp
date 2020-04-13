/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 11:40:49 by charles           #+#    #+#             */
/*   Updated: 2020/04/13 12:58:33 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
public:
    Fixed();
    Fixed(Fixed const& other);
    ~Fixed();
    void operator=(Fixed const& other);

    Fixed(int from);
    Fixed(float from);

    int getRawBits() const;
    void setRawBits(int const raw);

    float toFloat() const;
    int toInt() const;

    static int getFractionalBits();

private:
    int m_value;
    static int const m_fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& out, Fixed const& f);

#endif
