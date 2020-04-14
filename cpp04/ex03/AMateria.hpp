/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 16:24:00 by charles           #+#    #+#             */
/*   Updated: 2020/04/14 17:55:18 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"

class AMateria
{
public:
    AMateria(AMateria const& other);
    void operator=(AMateria const& other);
    virtual ~AMateria();

    AMateria(std::string const& type);
    std::string const& getType() const;
    unsigned int getXP() const;

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

protected:
    AMateria();

    std::string m_type;
    unsigned int _xp;  // subject force _xp instead of m_xp
};

#endif
