/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 20:02:19 by charles           #+#    #+#             */
/*   Updated: 2020/12/15 11:26:57 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

NotAnInt::NotAnInt() : m_n(0) {}
NotAnInt::NotAnInt(int n) : m_n(n) {}
NotAnInt::NotAnInt(NotAnInt const& other) : m_n(other.m_n) {}
NotAnInt& NotAnInt::operator=(NotAnInt const& other) { m_n = other.m_n; return *this; }
int NotAnInt::getN() const { return m_n; }

void intOnly(int n)
{
    std::cout << "intOnly() " << n << std::endl;
}

void notAnIntOnly(NotAnInt& n)
{
    std::cout << "notAnIntOnly() " << n.getN() << std::endl;
}

int main()
{
    int intArray[] = {1, 2, 3, 4, 10, 20, 30, -1, -2};
    size_t intArraySize = sizeof(intArray) / sizeof(int);
    for (size_t i = 0; i < intArraySize; i++)
        std::cout << intArray[i] << ", ";
    std::cout << std::endl;
    iter(intArray, intArraySize, timeTwo<int>);
    iter(intArray, intArraySize, timeThree<int>);
    iter(intArray, intArraySize, intOnly);

    std::cout << "--------------------------------------" << std::endl;

    float floatArray[] = {1.1, 2.2, 3.3, 4.3, 10.001, 20.9, 30.3, -1.2, -2.4};
    size_t floatArraySize = sizeof(floatArray) / sizeof(float);
    for (size_t i = 0; i < floatArraySize; i++)
        std::cout << floatArray[i] << ", ";
    std::cout << std::endl;
    iter(floatArray, floatArraySize, timeTwo<float>);
    iter(floatArray, floatArraySize, timeThree<float>);

    std::cout << "--------------------------------------" << std::endl;

    unsigned int uintArray[] = {1, 2, 3, 4, 10, 20, 30, 100, 2000};
    size_t uintArraySize = sizeof(uintArray) / sizeof(unsigned int);
    for (size_t i = 0; i < uintArraySize; i++)
        std::cout << uintArray[i] << ", ";
    std::cout << std::endl;
    iter(uintArray, uintArraySize, timeTwo<unsigned int>);
    iter(uintArray, uintArraySize, timeThree<unsigned int>);

    std::cout << "--------------------------------------" << std::endl;

    const int cintArray[] = {1, 2, 3, 4};
    size_t cintArraySize = sizeof(cintArray) / sizeof(const int);
    for (size_t i = 0; i < cintArraySize; i++)
        std::cout << cintArray[i] << ", ";
    std::cout << std::endl;
    iter(cintArray, cintArraySize, timeTwo<const int>);
    iter(cintArray, cintArraySize, timeThree<const int>);

    std::cout << "--------------------------------------" << std::endl;

    NotAnInt nintArray[] = {NotAnInt(1), NotAnInt(2), NotAnInt(3), NotAnInt(4)};
    size_t nintArraySize = sizeof(nintArray) / sizeof(NotAnInt);
    for (size_t i = 0; i < nintArraySize; i++)
        std::cout << nintArray[i].getN() << ", ";
    std::cout << std::endl;
    iter(nintArray, nintArraySize, notAnIntOnly);
    return 0;
}
