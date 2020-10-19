/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 11:40:49 by charles           #+#    #+#             */
/*   Updated: 2020/10/19 08:27:01 by cacharle         ###   ########.fr       */
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

    int  getRawBits() const;
    void setRawBits(int const raw);

private:
    int m_value;
    static int const m_fractional_bits = 8;
};

#endif
