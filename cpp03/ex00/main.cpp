/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 05:41:27 by cacharle          #+#    #+#             */
/*   Updated: 2020/11/10 14:07:05 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <fstream>
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

	return 0;
}
