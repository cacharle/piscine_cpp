/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:04:32 by charles           #+#    #+#             */
/*   Updated: 2020/11/17 11:32:12 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
public:
    Bureaucrat(Bureaucrat const& other);
    Bureaucrat& operator=(Bureaucrat const& other);
    ~Bureaucrat();

    Bureaucrat(std::string const& name, int grade);

    std::string const& getName()  const;
    int                getGrade() const;
    void               incrementGrade();
    void               decrementGrade();

    void               signForm(Form& form);

private:
    Bureaucrat();
    void checkGrade();

    std::string m_name;
    int         m_grade;

    class GradeTooHighException : public std::exception
    {
    public:
        GradeTooHighException();
        GradeTooHighException(GradeTooHighException const& other);
        GradeTooHighException& operator=(GradeTooHighException const& other);
        ~GradeTooHighException() throw();
        virtual char const* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        GradeTooLowException();
        GradeTooLowException(GradeTooLowException const& other);
        GradeTooLowException& operator=(GradeTooLowException const& other);
        ~GradeTooLowException() throw();
        virtual char const* what() const throw();
    };

};

std::ostream& operator<<(std::ostream& out, Bureaucrat const& b);

#endif
