/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:13:05 by charles           #+#    #+#             */
/*   Updated: 2020/04/14 18:43:15 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("jean", 140);
    Bureaucrat b("didier", 10);

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
