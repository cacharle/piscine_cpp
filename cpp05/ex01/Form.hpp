/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 19:19:45 by charles           #+#    #+#             */
/*   Updated: 2020/11/17 11:39:54 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
    Form(Form const& other);
    Form& operator=(Form const& other);
    ~Form();

    Form(std::string const& name, int gradeSign, int gradeExecute);

    std::string const& getName()         const;
    bool               getSigned()       const;
    int                getGradeSign()    const;
    int                getGradeExecute() const;

    void               beSigned(Bureaucrat const& b);

private:
    Form();
    void checkGrade();

    std::string const m_name;
    bool              m_signed;
    int         const m_gradeSign;
    int         const m_gradeExecute;

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

std::ostream& operator<<(std::ostream& out, Form const& f);

#endif
