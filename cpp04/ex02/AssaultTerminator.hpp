/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 15:46:20 by charles           #+#    #+#             */
/*   Updated: 2020/11/13 12:18:55 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
    AssaultTerminator();
    AssaultTerminator(AssaultTerminator const& other);
    AssaultTerminator& operator=(AssaultTerminator const& other);
    virtual ~AssaultTerminator();

    virtual ISpaceMarine* clone()        const;
    virtual void          battleCry()    const;
    virtual void          rangedAttack() const;
    virtual void          meleeAttack()  const;
private:
};

#endif
