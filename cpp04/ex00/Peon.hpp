/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 20:50:54 by charles           #+#    #+#             */
/*   Updated: 2020/12/11 10:26:58 by cacharle         ###   ########.fr       */
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
    virtual ~Peon();

    virtual void getPolymorphed() const;

private:
    Peon();
};

class Rat : public Victim
{
public:
    Rat(std::string const& name);
    Rat& operator=(Rat const& other);
    Rat(Rat const& other);
    virtual ~Rat();

    virtual void getPolymorphed() const;

private:
    Rat();
};

#endif
