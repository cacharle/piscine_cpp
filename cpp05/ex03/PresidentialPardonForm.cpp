/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <me@cacharle.xyz>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 13:01:25 by cacharle          #+#    #+#             */
/*   Updated: 2020/11/17 17:02:14 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const& target)
    : Form("presidential pardon", 25, 5), m_target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
    : Form(other) { *this = other; }

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    Form::operator=(other);
    m_target = other.m_target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::executeUnsafe() const
{
    std::cout << m_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm() : Form("", 0, 0) {}
