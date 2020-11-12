/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 20:50:54 by charles           #+#    #+#             */
/*   Updated: 2020/11/12 13:00:49 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
public:
    Peon(std::string const& name);
    Peon& operator=(Peon const& other);
    Peon(Peon const& other);
    ~Peon();

    virtual void getPolymorphed() const;

private:
    Peon();
};

#endif
