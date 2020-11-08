/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optional.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 11:43:24 by charles           #+#    #+#             */
/*   Updated: 2020/04/16 11:45:26 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPTIONAL_HPP
# define OPTIONAL_HPP

template<typename T>
class Optional
{
public:
    Optional();
    bool hasValue() const;
    T& getValue();

private:
    T m_value;
};

#endif
