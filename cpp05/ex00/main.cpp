/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:13:05 by charles           #+#    #+#             */
/*   Updated: 2020/12/12 11:41:15 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "############### CREATION" << std::endl;
    try                       { Bureaucrat bu("YO", 0);             }
    catch (std::exception& e) { std::cout << e.what() << std::endl; }
    try                       { Bureaucrat bu("YO2", 151);          }
    catch (std::exception& e) { std::cout << e.what() << std::endl; }

    Bureaucrat yep("YEP", 1);
    Bureaucrat yep2(yep);
    Bureaucrat yep3("SHOULD NOT BE OVERWRITTEN", 42);
    yep3 = yep;
    std::cout << yep;
    std::cout << yep2;
    std::cout << yep3;

    std::cout << std::endl;
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

    std::cout << std::endl;
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

    return 0;
}
