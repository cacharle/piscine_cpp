/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 19:46:56 by charles           #+#    #+#             */
/*   Updated: 2020/12/15 11:08:51 by cacharle         ###   ########.fr       */
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

class NotAnInt
{
public:
    NotAnInt();
    NotAnInt(int n);
    NotAnInt(NotAnInt const& other);
    NotAnInt& operator=(NotAnInt const& other);

    bool operator==(NotAnInt const& other) const;
    bool operator!=(NotAnInt const& other) const;
    bool operator>(NotAnInt const& other) const;
    bool operator<(NotAnInt const& other) const;
    bool operator>=(NotAnInt const& other) const;
    bool operator<=(NotAnInt const& other) const;

    int getN() const;

private:
    int m_n;
};

std::ostream& operator<<(std::ostream& out, NotAnInt const& n);

#endif
