/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 15:30:48 by charles           #+#    #+#             */
/*   Updated: 2020/11/13 12:16:07 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
    TacticalMarine();
    TacticalMarine(TacticalMarine const& other);
    TacticalMarine& operator=(TacticalMarine const& other);
    virtual ~TacticalMarine();

    virtual ISpaceMarine* clone()        const;
    virtual void          battleCry()    const;
    virtual void          rangedAttack() const;
    virtual void          meleeAttack()  const;
private:
};

#endif
