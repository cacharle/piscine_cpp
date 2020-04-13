/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 05:41:27 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/13 14:30:37 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    srand(time(NULL));

    FragTrap ft("bob");
    ft.rangedAttack("a dog");
    ft.meleeAttack("a cat");
    ft.takeDamage(10);
    ft.beRepaired(10);
    ft.vaulthunter_dot_exe("your mom");
    ft.vaulthunter_dot_exe("your dad");
    ft.vaulthunter_dot_exe("your brother");
    ft.vaulthunter_dot_exe("your sister");
    ft.vaulthunter_dot_exe("your grandma");
    ft.takeDamage(1000);
    ft.beRepaired(1000);

    std::cout << std::endl;
    ScavTrap scav("jean");
    scav.rangedAttack("a dog");
    scav.meleeAttack("a cat");
    scav.takeDamage(10);
    scav.beRepaired(10);
    scav.challengeNewcomer("your mom");
    scav.challengeNewcomer("your dad");
    scav.challengeNewcomer("your brother");
    scav.challengeNewcomer("your sister");
    scav.challengeNewcomer("your grandma");
    scav.takeDamage(1000);
    scav.beRepaired(1000);
	return 0;
}
