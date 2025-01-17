/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 16:31:34 by charles           #+#    #+#             */
/*   Updated: 2020/12/11 11:41:02 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    Ice(Ice const& other);
    Ice& operator=(Ice const& other);
    virtual ~Ice();

    virtual AMateria* clone() const;
    virtual void      use(ICharacter& target);
private:
};

#endif
