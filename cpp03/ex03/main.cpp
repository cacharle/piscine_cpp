/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 05:41:27 by cacharle          #+#    #+#             */
/*   Updated: 2020/11/11 06:55:12 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <fstream>
#include <ctime>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

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

    FragTrap ft("bob");
    std::cout << "=== ATTACK ===" << std::endl;
    ft.rangedAttack("a dog");
    ft.meleeAttack("a cat");
    std::cout << std::endl << "=== DAMAGE ===" << std::endl;
    ft.takeDamage(0);
    ft.beRepaired(0);
    ft.takeDamage(10);
    ft.beRepaired(10);
    std::cout << std::endl << "=== VAULTHUNTER ===" << std::endl;
    ft.vaulthunter_dot_exe("your mom");
    ft.vaulthunter_dot_exe("your dad");
    ft.vaulthunter_dot_exe("your brother");
    ft.vaulthunter_dot_exe("your sister");
    std::cout << "=== VAULTHUNTER NO ENERGY ===" << std::endl;
    ft.vaulthunter_dot_exe("your grandma");
    std::cout << std::endl << "=== OVER LIMIT ===" << std::endl;
    ft.takeDamage(1000);
    ft.beRepaired(1000);

    std::cout << std::endl << std::endl;

    ScavTrap scav("jean");
    std::cout << "=== ATTACK ===" << std::endl;
    scav.rangedAttack("a dog");
    scav.meleeAttack("a cat");
    std::cout << std::endl << "=== DAMAGE ===" << std::endl;
    scav.takeDamage(0);
    scav.beRepaired(0);
    scav.takeDamage(10);
    scav.beRepaired(10);
    std::cout << std::endl << "=== CHALLENGE NEW COMER ===" << std::endl;
    scav.challengeNewcomer("your mom");
    scav.challengeNewcomer("your dad");
    scav.challengeNewcomer("your brother");
    scav.challengeNewcomer("your sister");
    scav.challengeNewcomer("your grandma");
    std::cout << std::endl << "=== OVER LIMIT ===" << std::endl;
    scav.takeDamage(1000);
    scav.beRepaired(1000);

    std::cout << std::endl << std::endl;

    std::cout << std::endl;
    NinjaTrap ninja("didier");
    std::cout << "=== ATTACK ===" << std::endl;
    ninja.rangedAttack("a dog");
    ninja.meleeAttack("a cat");
    std::cout << std::endl << "=== DAMAGE ===" << std::endl;
    ninja.takeDamage(10);
    ninja.beRepaired(10);
    std::cout << std::endl << "=== SHOE BOX ===" << std::endl;
    ninja.ninjaShoebox(ninja);
    ninja.ninjaShoebox(ft);
    ninja.ninjaShoebox(scav);
    ninja.ninjaShoebox(ClapTrap("oui"));
    std::cout << std::endl << "=== OVER LIMIT ===" << std::endl;
    ninja.takeDamage(1000);
    ninja.beRepaired(1000);
	return 0;
}
