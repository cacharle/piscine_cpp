/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_DO_NOT_TURN_ME_IN.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 11:51:15 by charles           #+#    #+#             */
/*   Updated: 2020/11/10 11:58:30 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
    std::cout << "=== SUBJECT TESTS ===" << std::endl;
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    std::cout << std::endl << "=== SUBJECT 01 TESTS ===" << std::endl;
    Fixed       e;
    Fixed const f(10);
    Fixed const c(42.42f);
    Fixed const d(b);
    e = Fixed(1234.4321f);
    std::cout << "e is " << e << std::endl;
    std::cout << "f is " << f << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "e is " << e.toInt() << " as integer" << std::endl;
    std::cout << "f is " << f.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    std::cout << std::boolalpha;
    std::cout << std::endl << "=== OPERATORS TESTS ===" << std::endl;
    Fixed x(3.3f);
    Fixed y(3.5f);
    std::cout << "x is " << x << std::endl;
    std::cout << "y is " << y << std::endl;
    std::cout << "x + y = " << (x + y) << std::endl;
    std::cout << "x - y = " << (x - y) << std::endl;
    std::cout << "x * y = " << (x * y) << std::endl;
    std::cout << "x / y = " << (x / y) << std::endl;

    std::cout << std::endl << "=== COMPARISON TESTS ===" << std::endl;
    Fixed z(x);
    std::cout << "x is " << x << std::endl;
    std::cout << "y is " << y << std::endl;
    std::cout << "z is " << z << std::endl;
    std::cout << "x >  y = " << (x >  y)<< std::endl;
    std::cout << "x <  y = " << (x <  y)<< std::endl;
    std::cout << "x >= y = " << (x >= y)<< std::endl;
    std::cout << "x <= y = " << (x <= y)<< std::endl;
    std::cout << "x == y = " << (x == y)<< std::endl;
    std::cout << "x != y = " << (x != y)<< std::endl;
    std::cout << std::endl;
    std::cout << "x >  z = " << (x >  z)<< std::endl;
    std::cout << "x <  z = " << (x <  z)<< std::endl;
    std::cout << "x >= z = " << (x >= z)<< std::endl;
    std::cout << "x <= z = " << (x <= z)<< std::endl;
    std::cout << "x == z = " << (x == z)<< std::endl;
    std::cout << "x != z = " << (x != z)<< std::endl;
    std::cout << std::endl;
    std::cout << "y >  z = " << (y >  z)<< std::endl;
    std::cout << "y <  z = " << (y <  z)<< std::endl;
    std::cout << "y >= z = " << (y >= z)<< std::endl;
    std::cout << "y <= z = " << (y <= z)<< std::endl;
    std::cout << "y == z = " << (y == z)<< std::endl;
    std::cout << "y != z = " << (y != z)<< std::endl;

    std::cout << std::endl << "=== MAX/MIN TESTS ===" << std::endl;
    std::cout << "x is " << x << std::endl;
    std::cout << "y is " << y << std::endl;
    std::cout << "z is " << z << std::endl;
    std::cout << "Fixed::max(x, y): " << Fixed::max(x, y) << std::endl;
    std::cout << "Fixed::max(x, z): " << Fixed::max(x, z) << std::endl;
    std::cout << "Fixed::max(y, z): " << Fixed::max(y, z) << std::endl;
    std::cout << "Fixed::min(x, y): " << Fixed::min(x, y) << std::endl;
    std::cout << "Fixed::min(x, z): " << Fixed::min(x, z) << std::endl;
    std::cout << "Fixed::min(y, z): " << Fixed::min(y, z) << std::endl;

    const Fixed cx(x);
    const Fixed cy(y);
    const Fixed cz(z);
    std::cout << "cx is " << cx << std::endl;
    std::cout << "cy is " << cy << std::endl;
    std::cout << "cz is " << cz << std::endl;
    std::cout << "Fixed::max(cx, cy): " << Fixed::max(cx, cy) << std::endl;
    std::cout << "Fixed::max(cx, cz): " << Fixed::max(cx, cz) << std::endl;
    std::cout << "Fixed::max(cy, cz): " << Fixed::max(cy, cz) << std::endl;
    std::cout << "Fixed::min(cx, cy): " << Fixed::min(cx, cy) << std::endl;
    std::cout << "Fixed::min(cx, cz): " << Fixed::min(cx, cz) << std::endl;
    std::cout << "Fixed::min(cy, cz): " << Fixed::min(cy, cz) << std::endl;

    return 0;
}
