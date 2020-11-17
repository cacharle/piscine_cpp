/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:13:05 by charles           #+#    #+#             */
/*   Updated: 2020/11/17 16:35:40 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <ctime>
#include <cstdlib>
#include "Bureaucrat.hpp"

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
        std::cout << "=============== BUREAUCRAT ===============" << std::endl;
        std::cout << "############### CREATION" << std::endl;
        try                       { Bureaucrat bu("YO", 0);             }
        catch (std::exception& e) { std::cout << e.what() << std::endl; }
        try                       { Bureaucrat bu("YO2", 151);          }
        catch (std::exception& e) { std::cout << e.what() << std::endl; }

        Bureaucrat yep("YEP", 1);
        Bureaucrat yep2(yep);
        Bureaucrat yep3("SHOULD NOT BE PRINTED", 42);
        yep3 = yep;
        std::cout << yep;
        std::cout << yep2;
        std::cout << yep3;

        std::cout << "############### DECREMENT" << std::endl;
        Bureaucrat a("jean", 140);
        while (true)
        {
            try
            {
                a.decrementGrade();
                std::cout << a;
            }
            catch (std::exception& e)
            {
                std::cout << e.what() << std::endl;
                break;
            }
        }

        std::cout << "############### INCREMENT" << std::endl;
        Bureaucrat b("didier", 10);
        while (true)
        {
            try
            {
                b.incrementGrade();
                std::cout << b;
            }
            catch (std::exception& e)
            {
                std::cout << e.what() << std::endl;
                break;
            }
        }

        // Bureaucrat c("baraucrat", 10);
        // std::cout << "############### SIGN FORM" << std::endl;
        // Form f4("foo", 150, 1); c.signForm(f4);
        // Form f3("foo", 10, 1);  c.signForm(f3);
        // Form f2("foo", 9, 1);   c.signForm(f2);
        // Form f1("foo", 1, 1);   c.signForm(f1);
    }


    {
        std::cout << "================= SHRUBERRY CREATION  =================" << std::endl;

    }

    std::cout << std::endl;

    {
        std::cout << "================= PRESIDENTIAL PARDON =================" << std::endl;
    }

    std::cout << std::endl;

    {
        std::cout << "================= ROBOTOMY REQUEST    =================" << std::endl;
    }


    return 0;
}
