/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 05:57:10 by charles           #+#    #+#             */
/*   Updated: 2020/04/15 06:47:52 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp"

int main()
{
    int a[] = {10, 20, 30, 40, 50, 60};
    std::vector<int> b(a, a + 6);
    std::list<int> c(a, a + 6);
    std::deque<int> d(a, a + 6);

    std::cout << (easyfind(b, 10) != b.end()) << std::endl;
    std::cout << (easyfind(c, 20) != c.end()) << std::endl;
    std::cout << (easyfind(d, 30) != d.end()) << std::endl;
    std::cout << (easyfind(b, 40) != b.end()) << std::endl;
    std::cout << (easyfind(c, 50) != c.end()) << std::endl;
    std::cout << (easyfind(d, 60) != d.end()) << std::endl;

    std::cout << *easyfind(b, 10) << std::endl;
    std::cout << *easyfind(c, 20) << std::endl;
    std::cout << *easyfind(d, 30) << std::endl;
    std::cout << *easyfind(b, 40) << std::endl;
    std::cout << *easyfind(c, 50) << std::endl;
    std::cout << *easyfind(d, 60) << std::endl;


    std::cout << (easyfind(b, 70) != b.end()) << std::endl;
    std::cout << (easyfind(c, 80) != c.end()) << std::endl;
    std::cout << (easyfind(d, 90) != d.end()) << std::endl;

    return 0;
}
