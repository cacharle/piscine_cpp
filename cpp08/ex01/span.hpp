/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 06:55:07 by charles           #+#    #+#             */
/*   Updated: 2020/04/15 07:19:46 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>

class Span
{
public:
    Span();
    Span(Span const& other);
    void operator=(Span const& other);
    ~Span();

    Span(unsigned int n);
    void addNumber(int x);
    int shortestSpan() const;
    int longestSpan() const;

private:
    int* m_under;
    unsigned int m_size;
    unsigned int m_fillIndex;
};

#endif
