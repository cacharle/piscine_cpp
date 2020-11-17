/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonFrom.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <me@cacharle.xyz>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 13:42:46 by cacharle          #+#    #+#             */
/*   Updated: 2020/11/17 12:57:57 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFROM_HPP
# define PRESIDENTIALPARDONFROM_HPP

# include "Form.hpp"

class PresidentialPardonFrom : public Form
{
public:
    PresidentialPardonFrom(const PresidentialPardonFrom& other);
    PresidentialPardonFrom& operator=(const PresidentialPardonFrom& other);
    ~PresidentialPardonFrom();

    PresidentialPardonFrom(std::string const& target);

private:
    PresidentialPardonFrom();
    virtual void executeUnsafe() const;

    std::string m_target;
};

#endif
