/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 06:57:44 by charles           #+#    #+#             */
/*   Updated: 2020/12/17 14:12:43 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span()
    : m_under(new int[0]), m_size(0), m_fillIndex(0) {}

Span::Span(Span const& other)
    : m_under(new int[other.m_size]),
      m_size(other.m_size),
      m_fillIndex(other.m_fillIndex)
{
    for (unsigned int i = 0; i < m_fillIndex; i++)
        m_under[i] = other.m_under[i];
}

Span& Span::operator=(Span const& other)
{
    delete [] m_under;
    m_size      = other.m_size;
    m_under     = new int[m_size];
    m_fillIndex = other.m_fillIndex;
    for (unsigned int i = 0; i < m_fillIndex; i++)
        m_under[i] = other.m_under[i];
    return *this;
}

Span::~Span() { delete [] m_under; }

Span::Span(unsigned int n)
    : m_under(new int[n]), m_size(n), m_fillIndex(0) {}

void Span::addNumber(int x)
{
    if (m_fillIndex >= m_size)
        throw std::exception();
    m_under[m_fillIndex] = x;
    m_fillIndex++;
}

int Span::shortestSpan() const
{
    setupSpan();
    int shortest = m_under[m_fillIndex - 1] - m_under[0];
    for (size_t i = 0; i < m_fillIndex - 1; i++)
    {
        int span = m_under[i + 1] - m_under[i];
        if (span < shortest)
            shortest = span;
    }
    return shortest;
}

int Span::longestSpan() const
{
    setupSpan();
    return m_under[m_fillIndex - 1] - m_under[0];
}

void Span::setupSpan() const
{
    if (m_fillIndex <= 1)
        throw std::exception();
    std::sort(m_under, m_under + m_fillIndex);
}
