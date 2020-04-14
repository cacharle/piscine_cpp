/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 19:19:45 by charles           #+#    #+#             */
/*   Updated: 2020/04/14 19:37:21 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
public:
    Form(Form const& other);
    void operator=(Form const& other);
    ~Form();

    Form(std::string const& name);
    std::string const& getName() const;
    bool getSigned() const;
    int getGradeSign() const;
    int getGradeExecute() const;
    void beSigned(Bureaucrat const& b);

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
    Form();

    std::string const m_name;
    bool m_signed;
    int const m_gradeSign;
    int const m_gradeExecute;
};

std::ostream& operator<<(std::ostream& out, Form const& f);

#endif
