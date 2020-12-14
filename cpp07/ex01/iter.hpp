/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <me@cacharle.xyz>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 15:06:48 by cacharle          #+#    #+#             */
/*   Updated: 2020/12/14 15:18:09 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void iter(T* ptr, size_t len, void (*f)(T const& x))
{
    for (size_t i = 0; i < len; i++)
        f(ptr[i]);
}

template<typename T>
void timeTwo(T const& x)
{
    std::cout << "timeTwo function " << x << " * 2 = " << x * 2 << std::endl;
}

#endif
