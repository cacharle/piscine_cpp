/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 15:07:57 by charles           #+#    #+#             */
/*   Updated: 2020/04/14 15:28:02 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
public:
    Squad();
    Squad(Squad const& other);
    void operator=(Squad const& other);
    virtual ~Squad();

    virtual int getCount() const;
    virtual ISpaceMarine* getUnit(int n) const;
    virtual int push(ISpaceMarine* spaceMarine);

private:
    void destroyUnits();

    ISpaceMarine** m_units;
    int m_size;
};

#endif