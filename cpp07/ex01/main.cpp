/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 20:02:19 by charles           #+#    #+#             */
/*   Updated: 2020/12/14 15:16:32 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main()
{
    int intArray[] = {1, 2, 3, 4, 10, 20, 30, -1, -2};
    size_t intArraySize = sizeof(intArray) / sizeof(int);
    for (size_t i = 0; i < intArraySize; i++)
        std::cout << intArray[i] << ", ";
    std::cout << std::endl;
    iter(intArray, intArraySize, timeTwo<int>);

    std::cout << "--------------------------------------" << std::endl;

    float floatArray[] = {1.1, 2.2, 3.3, 4.3, 10.001, 20.9, 30.3, -1.2, -2.4};
    size_t floatArraySize = sizeof(floatArray) / sizeof(float);
    for (size_t i = 0; i < floatArraySize; i++)
        std::cout << floatArray[i] << ", ";
    std::cout << std::endl;
    iter(floatArray, floatArraySize, timeTwo<float>);

    std::cout << "--------------------------------------" << std::endl;

    unsigned int uintArray[] = {1, 2, 3, 4, 10, 20, 30, 100, 2000};
    size_t uintArraySize = sizeof(uintArray) / sizeof(unsigned int);
    for (size_t i = 0; i < uintArraySize; i++)
        std::cout << uintArray[i] << ", ";
    std::cout << std::endl;
    iter(uintArray, uintArraySize, timeTwo<unsigned int>);

    return 0;
}
