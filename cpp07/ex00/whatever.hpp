/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 19:46:56 by charles           #+#    #+#             */
/*   Updated: 2020/12/14 15:05:32 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void swap(T& a, T& b)
{
    T tmp(a);
    a = b;
    b = tmp;
}

template<typename T>
T& min(T& a, T& b)
{
    return a < b ? a : b;
}

template<typename T>
T& max(T& a, T& b)
{
    return a > b ? a : b;
}

#endif
