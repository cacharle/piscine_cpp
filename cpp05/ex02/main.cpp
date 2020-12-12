/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:13:05 by charles           #+#    #+#             */
/*   Updated: 2020/12/12 12:16:43 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <ctime>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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

        {
            std::cout << "############### SHRUBERRY SIGN FORM" << std::endl;
            ShrubberyCreationForm sh("shi");
            Bureaucrat c1("foo", 150); c1.signForm(sh);
            Bureaucrat c2("foo", 146); c2.signForm(sh);
            Bureaucrat c3("foo", 145); c3.signForm(sh);
            Bureaucrat c4("foo", 1);   c4.signForm(sh);
        }
        {
            std::cout << "############### PRESIDENTIAL SIGN FORM" << std::endl;
            PresidentialPardonForm pr("fu");
            Bureaucrat c1("foo", 150); c1.signForm(pr);
            Bureaucrat c2("foo", 26);  c2.signForm(pr);
            Bureaucrat c3("foo", 25);  c3.signForm(pr);
            Bureaucrat c4("foo", 1);   c4.signForm(pr);
        }
        {
            std::cout << "############### ROBOTOMY SIGN FORM" << std::endl;
            RobotomyRequestForm ro("mi");
            Bureaucrat c1("foo", 150); c1.signForm(ro);
            Bureaucrat c2("foo", 73);  c2.signForm(ro);
            Bureaucrat c3("foo", 72);  c3.signForm(ro);
            Bureaucrat c4("foo", 1);   c4.signForm(ro);
        }

        {
            std::cout << "############### SHRUBERRY EXECUTE FORM" << std::endl;
            ShrubberyCreationForm sh("shi");
            sh.beSigned(Bureaucrat("foo", 1));
            Bureaucrat c1("foo", 150); c1.executeForm(sh);
            Bureaucrat c2("foo", 138); c2.executeForm(sh);
            Bureaucrat c3("foo", 137); c3.executeForm(sh);
            Bureaucrat c4("foo", 1);   c4.executeForm(sh);
        }
        {
            std::cout << "############### PRESIDENTIAL EXECUTE FORM" << std::endl;
            PresidentialPardonForm pr("fu");
            pr.beSigned(Bureaucrat("foo", 1));
            Bureaucrat c1("foo", 150); c1.executeForm(pr);
            Bureaucrat c2("foo", 6);   c2.executeForm(pr);
            Bureaucrat c3("foo", 5);   c3.executeForm(pr);
            Bureaucrat c4("foo", 1);   c4.executeForm(pr);
        }
        {
            std::cout << "############### ROBOTOMY EXECUTE FORM" << std::endl;
            RobotomyRequestForm ro("mi");
            ro.beSigned(Bureaucrat("foo", 1));
            Bureaucrat c1("foo", 150); c1.executeForm(ro);
            Bureaucrat c2("foo", 46);  c2.executeForm(ro);
            Bureaucrat c3("foo", 45);  c3.executeForm(ro);
            Bureaucrat c4("foo", 1);   c4.executeForm(ro);
        }
    }

    std::cout << std::endl;
    {
        std::cout << "================= SHRUBBERY CREATION  =================" << std::endl;
        ShrubberyCreationForm sh("home");
        ShrubberyCreationForm sh2(sh);
        ShrubberyCreationForm sh3("SHOULD NOT BE PRINTED");
        sh3 = sh;
        std::cout << sh;
        std::cout << sh2;
        std::cout << sh3;

        try                       { sh.execute(Bureaucrat("", 1));       }
        catch (std::exception& e) { std::cout << e.what() << std::endl;  }

        try                       { sh.beSigned(Bureaucrat("foo", 1));   }
        catch (std::exception& e) { std::cout << e.what() << std::endl;  }
        try                       { sh.beSigned(Bureaucrat("foo", 145)); }
        catch (std::exception& e) { std::cout << e.what() << std::endl;  }
        try                       { sh.beSigned(Bureaucrat("foo", 146)); }
        catch (std::exception& e) { std::cout << e.what() << std::endl;  }
        try                       { sh.beSigned(Bureaucrat("foo", 150)); }
        catch (std::exception& e) { std::cout << e.what() << std::endl;  }
        std::cout << sh;

        try                       { sh.execute(Bureaucrat("bar", 1));   }
        catch (std::exception& e) { std::cout << e.what() << std::endl; }
        try                       { sh.execute(Bureaucrat("bar", 137)); }
        catch (std::exception& e) { std::cout << e.what() << std::endl; }
        try                       { sh.execute(Bureaucrat("bar", 138)); }
        catch (std::exception& e) { std::cout << e.what() << std::endl; }
        try                       { sh.execute(Bureaucrat("bar", 150)); }
        catch (std::exception& e) { std::cout << e.what() << std::endl; }
    }

    std::cout << std::endl;
    {
        std::cout << "================= PRESIDENTIAL PARDON =================" << std::endl;
        PresidentialPardonForm pr("Didier");
        PresidentialPardonForm pr2(pr);
        PresidentialPardonForm pr3("SHOULD NOT BE PRINTED");
        pr3 = pr;
        std::cout << pr;
        std::cout << pr2;
        std::cout << pr3;

        try                       { pr.execute(Bureaucrat("", 1));       }
        catch (std::exception& e) { std::cout << e.what() << std::endl;  }

        try                       { pr.beSigned(Bureaucrat("foo", 1));   }
        catch (std::exception& e) { std::cout << e.what() << std::endl;  }
        try                       { pr.beSigned(Bureaucrat("foo", 25));  }
        catch (std::exception& e) { std::cout << e.what() << std::endl;  }
        try                       { pr.beSigned(Bureaucrat("foo", 26));  }
        catch (std::exception& e) { std::cout << e.what() << std::endl;  }
        try                       { pr.beSigned(Bureaucrat("foo", 150)); }
        catch (std::exception& e) { std::cout << e.what() << std::endl;  }
        std::cout << pr;

        try                       { pr.execute(Bureaucrat("bar", 1));    }
        catch (std::exception& e) { std::cout << e.what() << std::endl;  }
        try                       { pr.execute(Bureaucrat("bar", 5));    }
        catch (std::exception& e) { std::cout << e.what() << std::endl;  }
        try                       { pr.execute(Bureaucrat("bar", 6));    }
        catch (std::exception& e) { std::cout << e.what() << std::endl;  }
        try                       { pr.execute(Bureaucrat("bar", 150));  }
        catch (std::exception& e) { std::cout << e.what() << std::endl;  }
    }

    std::cout << std::endl;
    {
        std::cout << "================= ROBOTOMY REQUEST    =================" << std::endl;
        RobotomyRequestForm ro("Jonathan");
        RobotomyRequestForm ro2(ro);
        RobotomyRequestForm ro3("SHOULD NOT BE PRINTED");
        ro3 = ro;
        std::cout << ro;
        std::cout << ro2;
        std::cout << ro3;

        try                       { ro.execute(Bureaucrat("", 1));       }
        catch (std::exception& e) { std::cout << e.what() << std::endl;  }

        try                       { ro.beSigned(Bureaucrat("foo", 1));   }
        catch (std::exception& e) { std::cout << e.what() << std::endl;  }
        try                       { ro.beSigned(Bureaucrat("foo", 72));  }
        catch (std::exception& e) { std::cout << e.what() << std::endl;  }
        try                       { ro.beSigned(Bureaucrat("foo", 73));  }
        catch (std::exception& e) { std::cout << e.what() << std::endl;  }
        try                       { ro.beSigned(Bureaucrat("foo", 150)); }
        catch (std::exception& e) { std::cout << e.what() << std::endl;  }
        std::cout << ro;

        try                       { ro.execute(Bureaucrat("bar", 1));    }
        catch (std::exception& e) { std::cout << e.what() << std::endl;  }
        try                       { ro.execute(Bureaucrat("bar", 45));   }
        catch (std::exception& e) { std::cout << e.what() << std::endl;  }
        try                       { ro.execute(Bureaucrat("bar", 46));   }
        catch (std::exception& e) { std::cout << e.what() << std::endl;  }
        try                       { ro.execute(Bureaucrat("bar", 150));  }
        catch (std::exception& e) { std::cout << e.what() << std::endl;  }
    }

    return 0;
}
