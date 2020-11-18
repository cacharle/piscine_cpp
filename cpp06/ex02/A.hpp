/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 09:56:52 by charles           #+#    #+#             */
/*   Updated: 2020/11/18 09:22:09 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include "Base.hpp"

class A : public Base
{
public:
    A();
    A(A const& other);
    A& operator=(A const& other);
    virtual ~A();
};

#endif
