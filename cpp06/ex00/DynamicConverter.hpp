/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DynamicConverter.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 11:35:47 by charles           #+#    #+#             */
/*   Updated: 2020/04/16 11:56:10 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_HPP
# define INCLUDE_HPP

class DynamicConverter
{
public:
    DynamicConverter(DynamicConverter const& other);
    DynamicConverter& operator=(DynamicConverter const& other);
    ~DynamicConverter();

    DynamicConverter(std::string const& origin);

    enum DetectedType
    {
        DetectedTypeInt,
        DetectedTypeChar,
        DetectedTypeFloat,
        DetectedTypeDouble,
    };

private:
    DynamicConverter();

    std::string      m_origin;
    DetectedType     m_type;
    Optional<int>    m_int;
    Optional<char>   m_char;
    Optional<float>  m_float;
    Optional<double> m_double;
};

#endif
