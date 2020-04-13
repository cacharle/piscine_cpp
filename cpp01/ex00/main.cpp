/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 09:26:11 by charles           #+#    #+#             */
/*   Updated: 2020/04/13 09:29:58 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap()
{
	Pony *p = new Pony(200, 100);
	p->sayHello();
	p->run();
	delete p;
}

void ponyOnTheStack()
{
	Pony p(200, 100);
	p.sayHello();
	p.run();
}

int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return 0;
}
