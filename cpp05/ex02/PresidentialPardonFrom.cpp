/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonFrom.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <me@cacharle.xyz>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 13:01:25 by cacharle          #+#    #+#             */
/*   Updated: 2020/11/17 13:04:10 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonFrom.hpp"

PresidentialPardonFrom::PresidentialPardonFrom(std::string const& target)
    : Form("presidential pardon", 25, 5), m_target(target) {}

PresidentialPardonFrom::PresidentialPardonFrom(const PresidentialPardonFrom& other)
    : Form(other) { *this = other; }

PresidentialPardonFrom& PresidentialPardonFrom::operator=(const PresidentialPardonFrom& other)
{
    Form::operator=(other);
    m_target = other.m_target;
    return *this;
}

PresidentialPardonFrom::~PresidentialPardonFrom() {}

void PresidentialPardonFrom::executeUnsafe() const
{
    std::cout << m_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

PresidentialPardonFrom::PresidentialPardonFrom() : Form("", 0, 0) {}
