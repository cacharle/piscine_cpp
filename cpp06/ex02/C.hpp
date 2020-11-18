/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 09:57:24 by charles           #+#    #+#             */
/*   Updated: 2020/11/18 09:22:17 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include "Base.hpp"

class C : public Base
{
public:
    C();
    C(C const& other);
    C& operator=(C const& other);
    virtual ~C();
};

#endif
