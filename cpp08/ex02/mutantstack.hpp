/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 07:29:42 by charles           #+#    #+#             */
/*   Updated: 2020/04/15 09:25:55 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack() : std::stack<T>()
    {}

    MutantStack(MutantStack const& other) : std::stack<T>(other)
    {}

    void operator=(MutantStack const& other)
    {
        std::stack<T>::operator=(other);
    }

    ~MutantStack()
    {}

    class iterator
    {
    public:
        iterator(iterator const& other)
            : m_parentStack(other.m_parentStack), m_pos(other.m_pos)
        {}

        void operator=(iterator const& other)
        {
            m_parentStack = other.m_parentStack;
            m_pos = other.m_pos;
        }

        ~iterator()
        {}

        iterator(MutantStack<T>& parentStack, unsigned int n)
            : m_parentStack(parentStack), m_pos(n)
        {}

        T& operator*()
        {
            std::stack<T> tmp;

            for (unsigned int i = m_pos; i != 0; i--)
            {
                tmp.push(m_parentStack.top());
                m_parentStack.pop();
            }
            T& res = m_parentStack.top();
            while (tmp.size() != 0)
            {
                m_parentStack.push(tmp.top());
                tmp.pop();
            }
            return res;
        }
        // T& operator->();

        // pre increment;
        iterator& operator++()
        {
            m_pos++;
            return *this;
        }

        // post increment;
        iterator& operator++(int)
        {
            m_pos++;
            return *this;
        }

        iterator& operator--()
        {
            m_pos--;
            return *this;
        }

        iterator& operator--(int)
        {
            m_pos--;
            return *this;
        }

        bool operator==(iterator const& right)
        {
            return m_pos == right.m_pos;
        }

        bool operator!=(iterator const& right)
        {
            return !(*this == right);
        }

    private:
        iterator() : m_pos(0)
        {}

        MutantStack<T>& m_parentStack;
        int m_pos;
    };

    iterator begin()
    {
        return iterator(*this, 0);
    }

    iterator end()
    {
        return iterator(*this, this->size());
    }
};

#endif
