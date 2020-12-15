/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 06:55:07 by charles           #+#    #+#             */
/*   Updated: 2020/12/15 12:22:31 by cacharle         ###   ########.fr       */
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

    template <typename InputIterator>
    void addNumber(InputIterator begin, InputIterator end)
    {
        for (; begin != end; ++begin)
            addNumber(*begin);
    }

    int shortestSpan() const;
    int longestSpan()  const;

private:
    int*         m_under;
    unsigned int m_size;
    unsigned int m_fillIndex;

    void setupSpan() const;
};

#endif
