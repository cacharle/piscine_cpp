/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 06:50:51 by charles           #+#    #+#             */
/*   Updated: 2020/12/17 14:11:02 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "span.hpp"

int main()
{
    {
        std::cout << "======================== SUBJECT MAIN =======================" << std::endl;
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    std::cout << std::endl;

    {
        std::cout << "======================== NOT FIRST =======================" << std::endl;
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(10);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    std::cout << std::endl;

    {
        std::cout << "======================== DEFAULT CONSTRUCTOR =======================" << std::endl;
        Span p;
        try { p.addNumber(0);    } catch (std::exception &e) { std::cout << e.what() << std::endl; }
        try { p.shortestSpan();  } catch (std::exception &e) { std::cout << e.what() << std::endl; }
        try { p.longestSpan();   } catch (std::exception &e) { std::cout << e.what() << std::endl; }
    }

    std::cout << std::endl;

    {
        std::cout << "======================== SINGLE ELEMENT      =======================" << std::endl;
        Span p(1);
        try { p.addNumber(1);    } catch (std::exception &e) { std::cout << "SHOULD NOT PRINT" << std::endl; }
        try { p.addNumber(2);    } catch (std::exception &e) { std::cout << e.what() << std::endl; }
        try { p.shortestSpan();  } catch (std::exception &e) { std::cout << e.what() << std::endl; }
        try { p.longestSpan();   } catch (std::exception &e) { std::cout << e.what() << std::endl; }
    }

    std::cout << std::endl;

    {
        std::cout << "======================== TWO    ELEMENT      =======================" << std::endl;
        Span p(2);
        try { p.addNumber(1); } catch (std::exception &e) { std::cout << "SHOULD NOT PRINT" << std::endl; }
        try { p.addNumber(4); } catch (std::exception &e) { std::cout << "SHOULD NOT PRINT" << std::endl; }
        try { std::cout << p.shortestSpan() << std::endl; } catch (std::exception &e) { std::cout << "SHOULD NOT PRINT" << std::endl;  }
        try { std::cout << p.longestSpan()  << std::endl; } catch (std::exception &e) {  std::cout << "SHOULD NOT PRINT" << std::endl; }
    }

    std::cout << std::endl;

    {
        std::cout << "======================== DUP    ELEMENT      =======================" << std::endl;
        Span p(3);
        try { p.addNumber(4); } catch (std::exception &e) { std::cout << "SHOULD NOT PRINT" << std::endl; }
        try { p.addNumber(4); } catch (std::exception &e) { std::cout << "SHOULD NOT PRINT" << std::endl; }
        try { p.addNumber(6); } catch (std::exception &e) { std::cout << "SHOULD NOT PRINT" << std::endl; }
        try { std::cout << p.shortestSpan() << std::endl; } catch (std::exception &e) { std::cout << "SHOULD NOT PRINT" << std::endl;  }
        try { std::cout << p.longestSpan()  << std::endl; } catch (std::exception &e) {  std::cout << "SHOULD NOT PRINT" << std::endl; }
    }


    std::cout << std::endl;

    {
        std::cout << "======================== RANGE  ELEMENT      =======================" << std::endl;
        Span sp(5);
        int ns[] = {5, 3, 17, 9, 11};
        sp.addNumber(ns, ns + (sizeof(ns) / sizeof(int)));
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    int seed;
    std::ifstream devRandom("/dev/random");
    if (devRandom.is_open())
    {
        devRandom.read((char*)&seed, sizeof(int));
        devRandom.close();
    }
    else
    {
        seed = time(NULL);
    }
	srand(seed);

    {
        std::cout << "======================== 10000  ELEMENT      =======================" << std::endl;
        Span sp(10000);
        for (size_t i = 0; i < 10000; i++)
            sp.addNumber(rand());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    {
        std::cout << "======================== 100000  ELEMENT      =======================" << std::endl;
        Span sp(100000);
        for (size_t i = 0; i < 100000; i++)
            sp.addNumber(rand());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    return 0;
}
