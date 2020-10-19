/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:04:32 by charles           #+#    #+#             */
/*   Updated: 2020/10/19 13:23:52 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat
{
public:
    Bureaucrat(Bureaucrat const& other);
    Bureaucrat& operator=(Bureaucrat const& other);
    ~Bureaucrat();

    Bureaucrat(std::string const& name, int grade);

    std::string const& getName() const;
    int                getGrade() const;
    void               incrementGrade();
    void               decrementGrade();
    void               signForm(Form& form);

    class GradeTooHighException : public std::exception
    {
    public:
        GradeTooHighException();
        GradeTooHighException(GradeTooHighException const& other);
        GradeTooHighException& operator=(GradeTooHighException const& other);
        ~GradeTooHighException();
        virtual char const* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        GradeTooLowException();
        GradeTooLowException(GradeTooLowException const& other);
        GradeTooLowException& operator=(GradeTooLowException const& other);
        ~GradeTooLowException();
        virtual char const* what() const throw();
    };

private:
    Bureaucrat();

    std::string const m_name;
    int               m_grade;
};

std::ostream& operator<<(std::ostream& out, Bureaucrat const& b);

#endif
