/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <me@cacharle.xyz>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 09:20:02 by charles           #+#    #+#             */
/*   Updated: 2020/11/18 09:21:22 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base() {}
Base::Base(Base const& other) { (void)other; }
Base& Base::operator=(Base const& other) { (void)other; return *this; }
Base::~Base() {}
