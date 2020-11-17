/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 05:41:27 by cacharle          #+#    #+#             */
/*   Updated: 2020/11/17 16:46:31 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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
    {
        seed = time(NULL);
    }
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

    std::cout << std::endl;

    {
        std::cout << "============================== SCAV TRAP ==============================" << std::endl;
        ScavTrap sv("Scaved");
        std::cout << "################################################## ATTACKS" << std::endl;
        sv.rangedAttack("a dog");
        sv.meleeAttack("a cat");
        std::cout << "################################################## DAMAGE" << std::endl;
        sv.takeDamage(0);
        sv.beRepaired(0);
        sv.takeDamage(10);
        sv.beRepaired(10);
        sv.takeDamage(60);
        sv.beRepaired(20);
        sv.beRepaired(40);
        std::cout << "################################################## DAMAGE OVERFLOW" << std::endl;
        sv.takeDamage(110);
        sv.beRepaired(110);
        {
            std::cout << "################################################## COPY CONSTRUCTOR" << std::endl;
            ScavTrap sv2(sv);
        }
        {
            std::cout << "################################################## OPERATOR=" << std::endl;
            ScavTrap sv3("foo");
            sv3 = sv;
        }
        std::cout << "################################################## CHALLENGE NEW COMER" << std::endl;
        sv.challengeNewcomer("your mom");
        sv.challengeNewcomer("your dad");
        sv.challengeNewcomer("your brother");
        sv.challengeNewcomer("your sister");
        sv.challengeNewcomer("your grandma");
        std::cout << "################################################## DESTRUCTOR" << std::endl;
    }

    std::cout << std::endl;

    {
        std::cout << "============================== CLAP TRAP ==============================" << std::endl;
        ClapTrap cl("Clapped");
        std::cout << "################################################## ATTACKS" << std::endl;
        cl.rangedAttack("a dog");
        cl.meleeAttack("a cat");
        std::cout << "################################################## DAMAGE" << std::endl;
        cl.takeDamage(0);
        cl.beRepaired(0);
        cl.takeDamage(10);
        cl.beRepaired(10);
        cl.takeDamage(60);
        cl.beRepaired(20);
        cl.beRepaired(40);
        std::cout << "################################################## DAMAGE OVERFLOW" << std::endl;
        cl.takeDamage(110);
        cl.beRepaired(110);
        {
            std::cout << "################################################## COPY CONSTRUCTOR" << std::endl;
            ClapTrap cl2(cl);
        }
        {
            std::cout << "################################################## OPERATOR=" << std::endl;
            ClapTrap cl3("foo");
            cl3 = cl;
        }
        std::cout << "################################################## DESTRUCTOR" << std::endl;
    }

	return 0;
}
