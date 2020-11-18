/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 10:00:18 by charles           #+#    #+#             */
/*   Updated: 2020/11/18 09:29:49 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
    switch (rand() % 3)
    {
        case 0: return new A();
        case 1: return new B();
        case 2: return new C();
    }
    return NULL;
}

void identify_from_pointer(Base *p)
{
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "C" << std::endl;
    else
        std::cout << "Couldn't identify from pointer" << std::endl;
}

void identify_from_reference(Base &p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    }
    catch (std::exception &e)
    {}
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    }
    catch (std::exception &e)
    {}
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    }
    catch (std::exception &e)
    {}

    std::cout << "Couldn't identify from reference" << std::endl;
}

int main()
{
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
        std::cout << "=============== IDENTIFY FROM POINTER ===============" << std::endl;
        Base *a = new A();
        Base *b = new B();
        Base *c = new C();
        identify_from_pointer(a);
        identify_from_pointer(b);
        identify_from_pointer(c);
        delete a;
        delete b;
        delete c;
    }

    {
        std::cout << "=============== IDENTIFY FROM REF     ===============" << std::endl;
        A a;
        B b;
        C c;
        identify_from_reference(a);
        identify_from_reference(b);
        identify_from_reference(c);
    }

    std::cout << "=============== GENERATE              ===============" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        Base *b = generate();
        std::cout << "---" << std::endl;
        identify_from_pointer(b);
        identify_from_reference(*b);
        delete b;
    }

    return 0;
}
