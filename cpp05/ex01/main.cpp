/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:13:05 by charles           #+#    #+#             */
/*   Updated: 2020/12/12 11:56:20 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    {
        std::cout << "=============== BUREAUCRAT ===============" << std::endl;
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

        Bureaucrat c("baraucrat", 10);
        std::cout << "############### SIGN FORM" << std::endl;
        Form f4("foo1", 150, 1); c.signForm(f4);
        Form f3("foo2", 10, 1);  c.signForm(f3);
        Form f2("foo3", 9, 1);   c.signForm(f2);
        Form f1("foo4", 1, 1);   c.signForm(f1);
    }

    std::cout << std::endl;

    {
        std::cout << "=============== FORM       ===============" << std::endl;
        Form f("FormBonjour", 32, 42);
        std::cout << f;
        Form f2(f);
        std::cout << f2;
        Form f3("Const", 1, 2);
        f3 = f;
        std::cout << f3;

        try                       { Form f("YO", 0, 1);                 }
        catch (std::exception& e) { std::cout << e.what() << std::endl; }
        try                       { Form f("YO2", 151, 1);              }
        catch (std::exception& e) { std::cout << e.what() << std::endl; }
        try                       { Form f("YO", 1, 0);                 }
        catch (std::exception& e) { std::cout << e.what() << std::endl; }
        try                       { Form f("YO2", 1, 151);              }
        catch (std::exception& e) { std::cout << e.what() << std::endl; }

        std::cout << "############### BE SIGNED" << std::endl;
        try                       { f.beSigned(Bureaucrat("foo", 1)); std::cout << f;         }
        catch (std::exception& e) { std::cout << "SHOULD NO PRINT " << e.what() << std::endl; }
        try                       { f.beSigned(Bureaucrat("foo", 32)); std::cout << f;        }
        catch (std::exception& e) { std::cout << "SHOULD NO PRINT " << e.what() << std::endl; }

        try                       { f.beSigned(Bureaucrat("foo", 33));                        }
        catch (std::exception& e) { std::cout << e.what() << std::endl;                       }
        try                       { f.beSigned(Bureaucrat("foo", 150));                       }
        catch (std::exception& e) { std::cout << e.what() << std::endl;                       }
    }

    return 0;
}
