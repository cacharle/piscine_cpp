/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 17:37:11 by charles           #+#    #+#             */
/*   Updated: 2020/11/13 14:09:18 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure();
    Cure(Cure const& other);
    Cure& operator=(Cure const& other);
    ~Cure();

    virtual AMateria* clone() const;
    virtual void      use(ICharacter& target);
private:
};

#endif
