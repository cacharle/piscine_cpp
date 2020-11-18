/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <me@cacharle.xyz>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 10:22:17 by charles           #+#    #+#             */
/*   Updated: 2020/11/18 10:22:35 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <string>

struct RawData
{
    char c1[8];
    int  n;
    char c2[8];
};

struct Data
{
    std::string s1;
    int         n;
    std::string s2;
};

#endif
