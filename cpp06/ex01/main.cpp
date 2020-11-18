/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <me@cacharle.xyz>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 09:32:02 by charles           #+#    #+#             */
/*   Updated: 2020/11/18 10:22:26 by charles          ###   ########.fr       */
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

void generate_chars(char c[8])
{
    char choices[] =
    {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
        'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
        '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'
    };
    for (int i = 0; i < 8; i++)
        c[i] = choices[rand() % (sizeof(choices) / sizeof(char))];
}

void* serialize(void)
{
    RawData *d = new RawData;

    static const char choices[] =
    {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
        'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
        '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'
    };
    size_t choices_len = sizeof(choices) / sizeof(char);
    for (int i = 0; i < 8; i++)
    {
        d->c1[i] = choices[rand() % choices_len];
        d->c2[i] = choices[rand() % choices_len];
    }
    d->n = rand() % INT_MAX;
    return reinterpret_cast<void*>(d);
}

Data* deserialize(void* raw)
{
    RawData *raw_data = reinterpret_cast<RawData*>(raw);
    Data *data        = new Data;

    char tmp[9] = {'\0'};
    memcpy(tmp, raw_data->c1, 8 * sizeof(char));
    data->s1 = tmp;
    memcpy(tmp, raw_data->c2, 8 * sizeof(char));
    data->s2 = tmp;
    data->n = raw_data->n;
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
        delete reinterpret_cast<RawData*>(raw);
        delete data;
    }
    return 0;
}
