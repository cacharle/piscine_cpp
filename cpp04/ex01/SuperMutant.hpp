/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 13:29:53 by charles           #+#    #+#             */
/*   Updated: 2020/04/14 13:37:56 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
    SuperMutant();
    SuperMutant(SuperMutant const& other);
    void operator=(SuperMutant const& other);
    ~SuperMutant();

    virtual void takeDamage(int amount);

private:
};

#endif