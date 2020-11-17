/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <me@cacharle.xyz>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 13:45:45 by cacharle          #+#    #+#             */
/*   Updated: 2020/11/17 13:27:05 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const& target)
    : Form("robotomy request", 145, 137), m_target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
    : Form(other) { *this = other; }

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    Form::operator=(other);
    m_target = other.m_target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::executeUnsafe() const
{
    if (rand() % 100 <= 50)
       std::cout << m_target << " has successfully been robotomized" << std::endl;
    else
       std::cout << m_target << " couldn't be robotomized" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm() : Form("", 0, 0) {}
