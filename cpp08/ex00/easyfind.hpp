/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 05:53:04 by charles           #+#    #+#             */
/*   Updated: 2020/12/15 11:58:54 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template<typename T>
int& easyfind(T& container, int x)
{
    typename T::iterator found = std::find(container.begin(), container.end(), x);
    if (found == container.end())
        throw std::exception();
    return *found;
}

#endif
