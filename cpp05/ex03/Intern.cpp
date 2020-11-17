/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <me@cacharle.xyz>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 13:41:09 by cacharle          #+#    #+#             */
/*   Updated: 2020/11/17 18:08:56 by charles          ###   ########.fr       */
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
            return (this->*(makeFormDispatch[i].func))(target);
    return NULL;
}
