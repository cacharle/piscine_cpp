/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonFrom.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <me@cacharle.xyz>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 13:42:46 by cacharle          #+#    #+#             */
/*   Updated: 2020/10/19 13:44:33 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFROM_HPP
# define PRESIDENTIALPARDONFROM_HPP

# include "Form.hpp"

class PresidentialPardonFrom : public Form
{
public:
    PresidentialPardonFrom();
    PresidentialPardonFrom(const PresidentialPardonFrom& other);
    PresidentialPardonFrom& operator=(const PresidentialPardonFrom& other);
    ~PresidentialPardonFrom();

private:
};

#endif
