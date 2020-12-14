/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <me@cacharle.xyz>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 09:32:02 by charles           #+#    #+#             */
/*   Updated: 2020/12/14 11:14:11 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <climits>
#include <cstring>

#include "serialization.hpp"

void* serialize(void)
{
    Data *data = new Data;

    static const char choices[] =
    {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
        'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
        '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'
    };
    size_t choices_len = sizeof(choices) / sizeof(char);
    for (size_t i = 0; i < 8; i++)
    {
        data->s1.push_back(choices[rand() % choices_len]);
        data->s2.push_back(choices[rand() % choices_len]);
    }
    data->n = rand() % INT_MAX;
    return reinterpret_cast<void*>(data);
}

Data* deserialize(void* raw)
{
    Data *data = reinterpret_cast<Data*>(raw);
    return data;
}

int main()
{
    int seed;
    std::ifstream devRandom("/dev/random");
    if (devRandom.is_open())
    {
        devRandom.read((char*)&seed, sizeof(int));
        devRandom.close();
    }
    else
    {
        seed = time(NULL);
    }
	srand(seed);

    for (int i = 0; i < 20; i++)
    {
        void *raw  = serialize();
        Data *data = deserialize(raw);
        std::cout << "s1: "   << data->s1
                  << ", n: "  << std::setw(10) << data->n
                  << ", s2: " << data->s2
                  << std::endl;
        delete data;
    }

    std::cout << "sizeof(Data) = " << sizeof(Data) << std::endl;
    return 0;
}
