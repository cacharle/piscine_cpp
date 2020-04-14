/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 16:31:34 by charles           #+#    #+#             */
/*   Updated: 2020/04/14 17:38:30 by charles          ###   ########.fr       */
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
    void operator=(Ice const& other);
    ~Ice();

    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
private:
};

#endif
