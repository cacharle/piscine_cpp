/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 20:27:26 by charles           #+#    #+#             */
/*   Updated: 2020/04/13 20:58:46 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
public:
    Sorcerer(std::string name, std::string title);
    void operator=(Sorcerer const& other);
    Sorcerer(Sorcerer const& other);
    ~Sorcerer();

    std::string const& getName() const;
    std::string const& getTitle() const;
    void polymorph(Victim const& v) const;

private:
    Sorcerer();

    std::string m_name;
    std::string m_title;
};

std::ostream& operator<<(std::ostream& out, Sorcerer const& s);

#endif
