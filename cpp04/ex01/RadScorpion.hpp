/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 13:35:04 by charles           #+#    #+#             */
/*   Updated: 2020/11/12 14:24:38 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
    RadScorpion();
    RadScorpion(RadScorpion const& other);
    RadScorpion& operator=(RadScorpion const& other);
    ~RadScorpion();

private:
};

#endif
