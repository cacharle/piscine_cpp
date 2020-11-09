/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 09:26:11 by charles           #+#    #+#             */
/*   Updated: 2020/11/09 09:58:46 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap()
{
    std::cout << "=== ponyOnTheHeap ===" << std::endl;
	Pony *p = new Pony("ChunkyBoy", 200, 100);
	p->sayHello();
	p->run();
	delete p;
}

void ponyOnTheStack()
{
    std::cout << "=== ponyOnTheStack ===" << std::endl;
	Pony p("Jean", 200, 100);
	p.sayHello();
	p.run();
}

int main()
{
	ponyOnTheHeap();
    std::cout << std::endl;
	ponyOnTheStack();
	return 0;
}
