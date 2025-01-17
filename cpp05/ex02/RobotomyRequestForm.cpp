/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <me@cacharle.xyz>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 13:45:45 by cacharle          #+#    #+#             */
/*   Updated: 2020/12/12 12:08:26 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const& target)
    : Form("robotomy request", 72, 45), m_target(target) {}

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
    std::cout << "DRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR" << std::endl;
    if (rand() % 100 <= 50)
       std::cout << m_target << " has successfully been robotomized" << std::endl;
    else
       std::cout << m_target << " couldn't be robotomized" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm() : Form("", 0, 0) {}
