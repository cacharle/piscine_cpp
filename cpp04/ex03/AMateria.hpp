/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 16:24:00 by charles           #+#    #+#             */
/*   Updated: 2020/11/13 14:42:03 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
public:
    AMateria(AMateria const& other);
    AMateria& operator=(AMateria const& other);
    virtual ~AMateria();

    AMateria(std::string const& type);

    std::string const& getType() const;
    unsigned int       getXP()   const;

    virtual AMateria* clone() const = 0;
    virtual void      use(ICharacter& target);

protected:
    AMateria();

    std::string  m_type;
    unsigned int _xp;  // subject force _xp
};

#endif
