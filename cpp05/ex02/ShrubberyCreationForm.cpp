/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <me@cacharle.xyz>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 13:45:45 by cacharle          #+#    #+#             */
/*   Updated: 2020/12/12 12:45:12 by cacharle         ###   ########.fr       */
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
    std::string filename(m_target + "_shrubbery");
    std::ofstream file(filename.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error: " << filename << ": " << std::strerror(errno) << std::endl;
        return;
    }
    file <<
        "              ##              \n"
        "             ####             \n"
        "            ######            \n"
        "          ##########          \n"
        "        ##############        \n"
        "       ######ntm#######       \n"
        "     ###################      \n"
        "    #####################     \n"
        "            |___|             \n";
    file.close();
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("", 0, 0) {}
