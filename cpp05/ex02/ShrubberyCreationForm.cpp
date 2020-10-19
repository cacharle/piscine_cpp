/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <me@cacharle.xyz>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 13:45:45 by cacharle          #+#    #+#             */
/*   Updated: 2020/10/19 13:55:53 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : m_target(other.m_target)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    Form::operator=(*this, other);
    m_target = other.m_target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target)
    m_target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm() : m_target("") {}
