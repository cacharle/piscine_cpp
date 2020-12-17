/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 07:29:42 by charles           #+#    #+#             */
/*   Updated: 2020/12/17 11:26:44 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <cstddef>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack() : std::stack<T>() {}

    MutantStack(MutantStack const& other) : std::stack<T>(other) {}

    MutantStack& operator=(MutantStack const& other)
    {
        std::stack<T>::operator=(other);
        return *this;
    }

    ~MutantStack() {}

    class iterator
    {
    public:
        iterator(iterator const& other)
            : m_parentStack(other.m_parentStack),
              m_pos(other.m_pos),
              m_dir(other.m_dir) {}

        iterator& operator=(iterator const& other)
        {
            m_parentStack = other.m_parentStack;
            m_pos         = other.m_pos;
            m_dir         = other.m_dir;
            return *this;
        }

        ~iterator() {}

        iterator(MutantStack<T>& parentStack, size_t n, size_t dir)
            : m_parentStack(parentStack), m_pos(n), m_dir(dir) {}

        T& operator*()
        {
            std::stack<T> tmp;

            for (size_t i = 0; m_parentStack.size() != m_pos + 1; i++)
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

        T* operator->() { return &(*(*this)); }

        iterator& operator++()    { m_pos += m_dir; return *this; }
        iterator  operator++(int) { iterator ret(*this); m_pos += m_dir; return ret; }
        iterator& operator--()    { m_pos -= m_dir; return *this; }
        iterator  operator--(int) { iterator ret(*this); m_pos -= m_dir; return ret; }

        bool operator==(iterator const& right) { return m_pos == right.m_pos; }
        bool operator!=(iterator const& right) { return !(*this == right);    }

    private:
        iterator() : m_pos(0) {}

        MutantStack<T>& m_parentStack;
        size_t          m_pos;
        size_t          m_dir;
    };

    typedef iterator reverse_iterator;

    iterator begin()  { return iterator(*this, 0, 1);                     }
    iterator end()    { return iterator(*this, this->size(), 1);          }
    iterator rbegin() { return reverse_iterator(*this, this->size() - 1, -1); }
    iterator rend()   { return reverse_iterator(*this, -1, -1);               }
};

#endif
