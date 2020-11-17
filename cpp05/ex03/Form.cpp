/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 19:26:39 by charles           #+#    #+#             */
/*   Updated: 2020/11/17 17:09:53 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form(Form const& other)
    : m_name(other.m_name),
      m_signed(other.m_signed),
      m_gradeSign(other.m_gradeSign),
      m_gradeExecute(other.m_gradeExecute)
{}

// The other attributes are const (asked by subject)
Form& Form::operator=(Form const& other)
{
    m_signed = other.m_signed;
    return *this;
}

Form::~Form() {}

Form::Form(std::string const& name, int gradeSign, int gradeExecute)
    : m_name(name),
      m_signed(false),
      m_gradeSign(gradeSign),
      m_gradeExecute(gradeExecute)
{
    checkGrade();
}

std::string const& Form::getName()         const { return m_name;         }
bool               Form::getSigned()       const { return m_signed;       }
int                Form::getGradeSign()    const { return m_gradeSign;    }
int                Form::getGradeExecute() const { return m_gradeExecute; }

void Form::beSigned(Bureaucrat const& b)
{
    if (b.getGrade() <= m_gradeSign)
        m_signed = true;
    else
        throw Form::GradeTooLowException();
}

void Form::execute(Bureaucrat const& executor) const
{
    if (!m_signed)
        throw Form::NoSignatureException();
    if (executor.getGrade() <= m_gradeExecute)
        executeUnsafe();
    else
        throw Form::GradeTooLowException();
}

void Form::checkGrade()
{
    if (m_gradeSign > 150)
        throw Form::GradeTooLowException();
    if (m_gradeSign < 1)
        throw Form::GradeTooHighException();
    if (m_gradeExecute > 150)
        throw Form::GradeTooLowException();
    if (m_gradeExecute < 1)
        throw Form::GradeTooHighException();
}

std::ostream& operator<<(std::ostream& out, Form const& f)
{
    out << f.getName() << " is "
        << (f.getSigned() ? "" : "not ") << "signed and needs at least "
        << f.getGradeSign() << " to be signed and "
        << f.getGradeExecute() << " to be executed" << std::endl;
    return out;
}
// compilation error if const members are not initialized
Form::Form()
    : m_name(""),
      m_signed(false),
      m_gradeSign(0),
      m_gradeExecute(0)
{}

///////////////////////////////////////////////////////////////////////////////
// Exception grade too high
///////////////////////////////////////////////////////////////////////////////

Form::GradeTooHighException::GradeTooHighException() : std::exception() {}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const& other)
    : std::exception(other) {}

Form::GradeTooHighException&
Form::GradeTooHighException::operator=(GradeTooHighException const& other)
{
    std::exception::operator=(other);
    return *this;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

char const* Form::GradeTooHighException::what() const throw() { return "Grade is too high for form"; }

///////////////////////////////////////////////////////////////////////////////
// Exception grade too high
///////////////////////////////////////////////////////////////////////////////

Form::GradeTooLowException::GradeTooLowException() : std::exception() {}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const& other)
    : std::exception(other) {}

Form::GradeTooLowException&
Form::GradeTooLowException::operator=(GradeTooLowException const& other)
{
    std::exception::operator=(other);
    return *this;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

char const* Form::GradeTooLowException::what() const throw() { return "Grade is too low for form"; }

///////////////////////////////////////////////////////////////////////////////
// Exception signature
///////////////////////////////////////////////////////////////////////////////

Form::NoSignatureException::NoSignatureException() : std::exception() {}

Form::NoSignatureException::NoSignatureException(NoSignatureException const& other)
    : std::exception(other) {}

Form::NoSignatureException&
Form::NoSignatureException::operator=(NoSignatureException const& other)
{
    std::exception::operator=(other);
    return *this;
}

Form::NoSignatureException::~NoSignatureException() throw() {}

char const* Form::NoSignatureException::what() const throw() { return "No signature"; }
