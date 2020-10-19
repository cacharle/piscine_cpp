/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:08:13 by charles           #+#    #+#             */
/*   Updated: 2020/04/14 18:44:49 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(Bureaucrat const& other)
{
    *this = other;
}

void Bureaucrat::operator=(Bureaucrat const& other)
{
    m_grade = other.m_grade;
}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat::Bureaucrat(std::string const& name, int grade)
    : m_name(name), m_grade(grade)
{
}

std::string const& Bureaucrat::getName() const
{
    return m_name;
}

int Bureaucrat::getGrade() const
{
    return m_grade;
}

void Bureaucrat::incrementGrade()
{
    if (m_grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    else
        m_grade--;
}

void Bureaucrat::decrementGrade()
{
    if (m_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    else
        m_grade++;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() : std::exception()
{}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const& other)
    : std::exception(other)
{}

void Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const& other)
{
    std::exception::operator=(other);
}

Bureaucrat::GradeTooHighException::~GradeTooHighException()
{}

char const* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

Bureaucrat::GradeTooLowException::GradeTooLowException() : std::exception()
{}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const& other)
    : std::exception(other)
{}

void Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const& other)
{
    std::exception::operator=(other);
}

Bureaucrat::GradeTooLowException::~GradeTooLowException()
{}

char const* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

Bureaucrat::Bureaucrat()
{}

std::ostream& operator<<(std::ostream& out, Bureaucrat const& b)
{
    std::cout << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return out;
}