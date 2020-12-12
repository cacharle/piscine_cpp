/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:08:13 by charles           #+#    #+#             */
/*   Updated: 2020/12/12 11:35:48 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(Bureaucrat const& other)
    : m_name(other.m_name) { *this = other; }

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& other)
{
    // cannot copy other.m_name since it's constant
    m_grade = other.m_grade;
    return *this;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string const& name, int grade)
    : m_name(name), m_grade(grade)
{
    checkGrade();
}

std::string const& Bureaucrat::getName()  const { return m_name;  }
int                Bureaucrat::getGrade() const { return m_grade; }

void Bureaucrat::incrementGrade()
{
    m_grade--;
    checkGrade();
}

void Bureaucrat::decrementGrade()
{
    m_grade++;
    checkGrade();
}

void Bureaucrat::checkGrade()
{
    if (m_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (m_grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

std::ostream& operator<<(std::ostream& out, Bureaucrat const& b)
{
    std::cout << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return out;
}

///////////////////////////////////////////////////////////////////////////////
// Exception grade too high
///////////////////////////////////////////////////////////////////////////////

Bureaucrat::GradeTooHighException::GradeTooHighException() : std::exception() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const& other)
    : std::exception(other) {}

Bureaucrat::GradeTooHighException&
Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const& other)
{
    std::exception::operator=(other);
    return *this;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

char const* Bureaucrat::GradeTooHighException::what() const throw() { return "Grade is too high"; }

///////////////////////////////////////////////////////////////////////////////
// Exception grade too low
///////////////////////////////////////////////////////////////////////////////

Bureaucrat::GradeTooLowException::GradeTooLowException() : std::exception() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const& other)
    : std::exception(other) {}

Bureaucrat::GradeTooLowException&
Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const& other)
{
    std::exception::operator=(other);
    return *this;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

char const* Bureaucrat::GradeTooLowException::what() const throw() { return "Grade is too low"; }

Bureaucrat::Bureaucrat() {}
