/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <me@cacharle.xyz>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 14:41:39 by cacharle          #+#    #+#             */
/*   Updated: 2020/12/15 11:10:07 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "whatever.hpp"

NotAnInt::NotAnInt() : m_n(0) {}
NotAnInt::NotAnInt(int n) : m_n(n) {}
NotAnInt::NotAnInt(NotAnInt const& other) : m_n(other.m_n) {}
NotAnInt& NotAnInt::operator=(NotAnInt const& other) { m_n = other.m_n; return *this; }

bool NotAnInt::operator==(NotAnInt const& other) const { return m_n == other.m_n; }
bool NotAnInt::operator!=(NotAnInt const& other) const { return m_n != other.m_n; }
bool NotAnInt::operator>(NotAnInt const& other)  const { return m_n >  other.m_n; }
bool NotAnInt::operator<(NotAnInt const& other)  const { return m_n <  other.m_n; }
bool NotAnInt::operator>=(NotAnInt const& other) const { return m_n >= other.m_n; }
bool NotAnInt::operator<=(NotAnInt const& other) const { return m_n <= other.m_n; }

int NotAnInt::getN() const { return m_n; }

std::ostream& operator<<(std::ostream& out, NotAnInt const& n) { out << n.getN(); return out; }


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
        NotAnInt ai(34);
        NotAnInt bi(43);
        std::cout << "=================== SWAP         ================" << std::endl;
        ::swap(af, bf);
        std::cout << "af = " << af << ", bf = " << bf << std::endl;
        ::swap(ad, bd);
        std::cout << "ad = " << ad << ", bd = " << bd << std::endl;
        ::swap(ac, bc);
        std::cout << "ac = " << ac << ", bc = " << bc << std::endl;
        ::swap(ai, bi);
        std::cout << "ai = " << ai << ", bi = " << bi << std::endl;
    }

    std::cout << std::endl;

    double ad = 3.4;
    double bd = 4.5;
    float af = 3.4f;
    float bf = 4.5f;
    char ac = 'a';
    char bc = 'b';
    NotAnInt ai(54);
    NotAnInt bi(53);

    int same1 = 4;
    int same2 = 4;

    std::cout << "=================== MIN          ================" << std::endl;
    std::cout << "min(af, bf) = " << ::min(af, bf) << std::endl;
    std::cout << "min(ad, bd) = " << ::min(ad, bd) << std::endl;
    std::cout << "min(ac, bc) = " << ::min(ac, bc) << std::endl;
    std::cout << "min(ai, bi) = " << ::min(ai, bi) << std::endl;
    int &minsame = ::min(same1, same2);
    std::cout << "min(same1, same2) = " << minsame << ", address same2 = " << &same2 << ", address minsame = " << &minsame << std::endl;

    std::cout << std::endl;

    std::cout << "=================== MAX          ================" << std::endl;
    std::cout << "max(af, bf) = " << ::max(af, bf) << std::endl;
    std::cout << "max(ad, bd) = " << ::max(ad, bd) << std::endl;
    std::cout << "max(ac, bc) = " << ::max(ac, bc) << std::endl;
    std::cout << "max(ai, bi) = " << ::max(ai, bi) << std::endl;
    int &maxsame = ::max(same1, same2);
    std::cout << "max(same1, same2) = " << maxsame << ", address same2 = " << &same2 << ", address maxsame = " << &maxsame << std::endl;

    return 0;
}
