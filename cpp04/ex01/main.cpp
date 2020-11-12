/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 09:05:58 by charles           #+#    #+#             */
/*   Updated: 2020/11/12 14:36:49 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
    {
        std::cout << "================ SUBJECT MAIN =====================" << std::endl;
        Character* me = new Character("me");
        std::cout << *me;
        Enemy* b = new RadScorpion();
        AWeapon* pr = new PlasmaRifle();
        AWeapon* pf = new PowerFist();
        me->equip(pr);
        std::cout << *me;
        me->equip(pf);
        me->attack(b);
        std::cout << *me;
        me->equip(pr);
        std::cout << *me;
        me->attack(b);
        std::cout << *me;
        me->attack(b);
        std::cout << *me;
        delete me;
        ((RadScorpion*)b)->~RadScorpion();
        delete pr;
        delete pf;
    }

    std::cout << std::endl;

    {

    }

    return 0;
}
