/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 05:41:27 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/13 14:11:05 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "FragTrap.hpp"

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
	return 0;
}
