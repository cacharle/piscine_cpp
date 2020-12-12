/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <me@cacharle.xyz>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 13:39:59 by cacharle          #+#    #+#             */
/*   Updated: 2020/12/12 12:32:05 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
public:
    Intern();
    Intern(const Intern& other);
    Intern& operator=(const Intern& other);
    ~Intern();

    Form *makeForm(std::string const& name, std::string const& target);

private:
    Form *makeShrubberyCreationForm(std::string const& target);
    Form *makePresidentialPardonForm(std::string const& target);
    Form *makeRobotomyRequestForm(std::string const& target);

    typedef Form* (Intern::* makeFormFunc)(std::string const&);
    struct makeFormEntry
    {
        std::string  const name;
        makeFormFunc const func;
    };
    static makeFormEntry makeFormDispatch[];
};

#endif
