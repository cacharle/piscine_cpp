/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <me@cacharle.xyz>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 14:41:39 by cacharle          #+#    #+#             */
/*   Updated: 2020/12/14 15:05:32 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "whatever.hpp"

int main()
{
    {
        std::cout << "=================== SUBJECT MAIN ================" << std::endl;
        int a = 2;
        int b = 3;
        ::swap(a, b);
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
        std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min(c, d) = " << ::min( c, d ) << std::endl;
        std::cout << "max(c, d) = " << ::max( c, d ) << std::endl;
    }

    std::cout << std::endl;

    {
        double ad = 3.4;
        double bd = 4.5;
        float af = 3.4f;
        float bf = 4.5f;
        char ac = 'a';
        char bc = 'b';
        std::cout << "=================== SWAP         ================" << std::endl;
        ::swap(af, bf);
        std::cout << "af = " << af << ", bf = " << bf << std::endl;
        ::swap(ad, bd);
        std::cout << "ad = " << ad << ", bd = " << bd << std::endl;
        ::swap(ac, bc);
        std::cout << "ac = " << ac << ", bc = " << bc << std::endl;
    }

    std::cout << std::endl;

    double ad = 3.4;
    double bd = 4.5;
    float af = 3.4f;
    float bf = 4.5f;
    char ac = 'a';
    char bc = 'b';


    int same1 = 4;
    int same2 = 4;

    std::cout << "=================== MIN          ================" << std::endl;
    std::cout << "min(af, bf) = " << ::min(af, bf) << std::endl;
    std::cout << "min(ad, bd) = " << ::min(ad, bd) << std::endl;
    std::cout << "min(ac, bc) = " << ::min(ac, bc) << std::endl;
    int &minsame = ::min(same1, same2);
    std::cout << "min(same1, same2) = " << minsame << ", address same2 = " << &same2 << ", address minsame = " << &minsame << std::endl;

    std::cout << std::endl;

    std::cout << "=================== MAX          ================" << std::endl;
    std::cout << "max(af, bf) = " << ::max(af, bf) << std::endl;
    std::cout << "max(ad, bd) = " << ::max(ad, bd) << std::endl;
    std::cout << "max(ac, bc) = " << ::max(ac, bc) << std::endl;
    int &maxsame = ::max(same1, same2);
    std::cout << "max(same1, same2) = " << maxsame << ", address same2 = " << &same2 << ", address maxsame = " << &maxsame << std::endl;

    return 0;
}
