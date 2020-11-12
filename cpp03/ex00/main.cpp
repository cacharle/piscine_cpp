/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 05:41:27 by cacharle          #+#    #+#             */
/*   Updated: 2020/11/12 10:42:38 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
    int seed;
    std::ifstream devRandom("/dev/random");
    if (devRandom.is_open())
    {
        devRandom.read((char*)&seed, sizeof(int));
        devRandom.close();
    }
    else
        seed = time(NULL);
	srand(seed);

    {
        std::cout << "============================== FRAG TRAP ==============================" << std::endl;
        FragTrap ft("Fragger");
        std::cout << "################################################## ATTACKS" << std::endl;
        ft.rangedAttack("a dog");
        ft.meleeAttack("a cat");
        std::cout << "################################################## DAMAGE" << std::endl;
        ft.takeDamage(0);
        ft.beRepaired(0);
        ft.takeDamage(10);
        ft.beRepaired(10);
        ft.takeDamage(60);
        ft.beRepaired(20);
        ft.beRepaired(40);
        std::cout << "################################################## DAMAGE OVERFLOW" << std::endl;
        ft.takeDamage(110);
        ft.beRepaired(110);
        {
            std::cout << "################################################## COPY CONSTRUCTOR" << std::endl;
            FragTrap ft2(ft);
        }
        {
            std::cout << "################################################## OPERATOR=" << std::endl;
            FragTrap ft3("foo");
            ft3 = ft;
        }
        std::cout << "################################################## VAULTHUNTER" << std::endl;
        ft.vaulthunter_dot_exe("your mom");
        ft.vaulthunter_dot_exe("your dad");
        ft.vaulthunter_dot_exe("your brother");
        ft.vaulthunter_dot_exe("your sister");
        std::cout << "################################################## VAULTHUNTER NO ENERGY" << std::endl;
        ft.vaulthunter_dot_exe("your grandma");
        std::cout << "################################################## DESTRUCTOR" << std::endl;
    }
	return 0;
}
