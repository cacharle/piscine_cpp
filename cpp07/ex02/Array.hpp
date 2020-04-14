/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 20:14:07 by charles           #+#    #+#             */
/*   Updated: 2020/04/14 20:41:25 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAP_HPP
# define ARRAP_HPP

#include <exception>

template<typename T>
class Array
{
public:
    Array() : m_under(new T[0]), m_size(0)
    {}

    Array(unsigned int n) : m_under(new T[n]()), m_size(n)
    {}

    Array(Array const& other) : m_under(new T[other.m_size]), m_size(other.m_size)
    {
        for (unsigned int i = 0; i < m_size; i++)
            m_under[i] = other.m_under[i];
    }

    void operator=(Array const& other)
    {
        delete [] m_under;
        m_size = other.m_size;
        m_under = new T[m_size];
        for (unsigned int i = 0; i < m_size; i++)
            m_under[i] = other.m_under[i];
    }

    ~Array()
    {
        delete [] m_under;
    }

    T& operator[](unsigned int n)
    {
        if (n >= m_size)
            throw std::exception();
        return m_under[n];
    }

    T const& operator[](unsigned int n) const
    {
        if (n >= m_size)
            throw std::exception();
        return m_under[n];
    }

    unsigned int size() const
    {
        return m_size;
    }

private:
    T* m_under;
    unsigned int m_size;
};

#endif
