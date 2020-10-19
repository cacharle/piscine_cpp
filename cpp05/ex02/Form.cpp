/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 19:26:39 by charles           #+#    #+#             */
/*   Updated: 2020/10/19 13:20:29 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
    : m_name(""),
      m_gradeSign(1),
      m_gradeExecute(1)
{}

Form::Form(Form const& other)
    : m_name(other.m_name),
      m_signed(other.m_signed),
      m_gradeSign(other.m_gradeSign),
      m_gradeExecute(other.m_gradeExecute)
{}

Form& Form::operator=(Form const& other)
{
    m_signed = other.m_signed;
    return *this;
}

Form::~Form() {}

Form::Form(std::string const& name)
    : m_name(name),
      m_signed(false),
      m_gradeSign(1),
      m_gradeExecute(1)
{}

std::string const& Form::getName()         const { return m_name;         }
bool               Form::getSigned()       const { return m_signed;       }
int                Form::getGradeSign()    const { return m_gradeSign;    }
int                Form::getGradeExecute() const { return m_gradeExecute; }

void Form::beSigned(Bureaucrat const& b)
{
    if (b.getGrade() >= m_gradeSign)
        m_signed = true;
}

///////////////////////////////////////////////////////////////////////////////
// Exceptions
///////////////////////////////////////////////////////////////////////////////

Form::GradeTooHighException::GradeTooHighException() : std::exception() {}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const& other)
    : std::exception(other)
{}

Form::GradeTooHighException&
Form::GradeTooHighException::operator=(GradeTooHighException const& other)
{
    std::exception::operator=(other);
    return *this;
}

Form::GradeTooHighException::~GradeTooHighException()
{}

char const* Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high for form";
}

Form::GradeTooLowException::GradeTooLowException() : std::exception()
{}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const& other)
    : std::exception(other)
{}

Form::GradeTooLowException&
Form::GradeTooLowException::operator=(GradeTooLowException const& other)
{
    std::exception::operator=(other);
    return *this;
}

Form::GradeTooLowException::~GradeTooLowException()
{}

char const* Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low for form";
}

std::ostream& operator<<(std::ostream& out, Form const& f)
{
    out << f.getName() << " is "
        << (f.getSigned() ? "" : "not ") << "signed and needs at least"
        << f.getGradeSign() << " to be signed and "
        << f.getGradeExecute() << " to be executed" << std::endl;
    return out;
}
