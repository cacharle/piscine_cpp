/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <me@cacharle.xyz>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 13:41:09 by cacharle          #+#    #+#             */
/*   Updated: 2020/12/12 12:32:15 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}
Intern::Intern(const Intern& other) { (void)other; }
Intern& Intern::operator=(const Intern& other) { (void)other; return *this; }
Intern::~Intern() {}

Form *Intern::makeShrubberyCreationForm(std::string const& target)
    { return new ShrubberyCreationForm(target);  }

Form *Intern::makePresidentialPardonForm(std::string const& target)
    { return new PresidentialPardonForm(target); }

Form *Intern::makeRobotomyRequestForm(std::string const& target)
    { return new RobotomyRequestForm(target);    }

Intern::makeFormEntry Intern::makeFormDispatch[] =
{
    {"shrubbery creation",  &Intern::makeShrubberyCreationForm},
    {"presidential pardon", &Intern::makePresidentialPardonForm},
    {"robotomy request",    &Intern::makeRobotomyRequestForm},
};

Form *Intern::makeForm(std::string const& name, std::string const& target)
{
    for (size_t i = 0; i < sizeof(Intern::makeFormDispatch) / sizeof(Intern::makeFormEntry); i++)
        if ((this->makeFormDispatch[i]).name == name)
        {
            Form *form = (this->*(makeFormDispatch[i].func))(target);
            std::cout << "Intern creates " << *form;
            return form;
        }
    std::cout << "Intern cannot create form: " << name << " is not a known form name" << std::endl;
    return NULL;
}
