/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <me@cacharle.xyz>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 13:45:45 by cacharle          #+#    #+#             */
/*   Updated: 2020/11/17 13:23:52 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target)
    : Form("shrubbery creation", 145, 137), m_target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : Form(other) { *this = other; }

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    Form::operator=(other);
    m_target = other.m_target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::executeUnsafe() const
{
    std::ofstream file(m_target + "_shrubbery");
    if (!file.is_open())
    {
        std::cerr << "Error: " << m_target + "_shrubbery" << ": " << std::strerror(errno) << std::endl;
        return;
    }
    file <<
        "              ##              "
        "             ####             "
        "            ######            "
        "          ##########          "
        "        ##############        "
        "       ######ntm#######       "
        "     ###################      "
        "    #####################     "
        "            |___|             ";
    file.close();
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("", 0, 0) {}
