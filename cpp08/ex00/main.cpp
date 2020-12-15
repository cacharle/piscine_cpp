/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 05:57:10 by charles           #+#    #+#             */
/*   Updated: 2020/12/15 11:59:54 by cacharle         ###   ########.fr       */
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

    std::cout << easyfind(b, 10) << std::endl;
    std::cout << easyfind(c, 20) << std::endl;
    std::cout << easyfind(d, 30) << std::endl;
    std::cout << easyfind(b, 40) << std::endl;
    std::cout << easyfind(c, 50) << std::endl;
    std::cout << easyfind(d, 60) << std::endl;

    try { std::cout << easyfind(b, 70) << std::endl; } catch (std::exception &e) { std::cout << e.what() << std::endl; }
    try { std::cout << easyfind(c, 80) << std::endl; } catch (std::exception &e) { std::cout << e.what() << std::endl; }
    try { std::cout << easyfind(d, 90) << std::endl; } catch (std::exception &e) { std::cout << e.what() << std::endl; }
    try { std::cout << easyfind(d, -1) << std::endl; } catch (std::exception &e) { std::cout << e.what() << std::endl; }

    return 0;
}
