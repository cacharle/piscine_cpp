/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:04:32 by charles           #+#    #+#             */
/*   Updated: 2020/04/14 18:42:13 by charles          ###   ########.fr       */
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
    void operator=(Bureaucrat const& other);
    ~Bureaucrat();

    Bureaucrat(std::string const& name, int grade);
    std::string const& getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();

    class GradeTooHighException : public std::exception
    {
    public:
        GradeTooHighException();
        GradeTooHighException(GradeTooHighException const& other);
        void operator=(GradeTooHighException const& other);
        ~GradeTooHighException();
        virtual char const* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        GradeTooLowException();
        GradeTooLowException(GradeTooLowException const& other);
        void operator=(GradeTooLowException const& other);
        ~GradeTooLowException();
        virtual char const* what() const throw();
    };

private:
    Bureaucrat();

    std::string const m_name;
    int m_grade;
};

std::ostream& operator<<(std::ostream& out, Bureaucrat const& b);

#endif
