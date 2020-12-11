/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 15:50:35 by charles           #+#    #+#             */
/*   Updated: 2020/12/11 11:30:48 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
    {
        std::cout << "================ SUBJECT MAIN       =====================" << std::endl;
        ISpaceMarine* bob = new TacticalMarine;
        ISpaceMarine* jim = new AssaultTerminator;

        ISquad* vlc = new Squad;
        vlc->push(bob);
        vlc->push(jim);
        for (int i = 0; i < vlc->getCount(); ++i)
        {
            ISpaceMarine* cur = vlc->getUnit(i);
            cur->battleCry();
            cur->rangedAttack();
            cur->meleeAttack();
        }
        delete vlc;
    }

    std::cout << std::endl;

    {
        std::cout << "================ TACTICAL MARINE    =====================" << std::endl;
        TacticalMarine t;
        t.battleCry();
        t.rangedAttack();
        t.meleeAttack();
        TacticalMarine t2(t);
        TacticalMarine t3;
        t3 = t;
        std::cout << "################ INTERFACE" << std::endl;
        ISpaceMarine *sm = new TacticalMarine();
        sm->battleCry();
        sm->rangedAttack();
        sm->meleeAttack();
        delete sm;
    }

    std::cout << std::endl;

    {
        std::cout << "================ ASSAULT TERMINATOR =====================" << std::endl;
        AssaultTerminator a;
        a.battleCry();
        a.rangedAttack();
        a.meleeAttack();
        AssaultTerminator a2(a);
        AssaultTerminator a3;
        a3 = a;
        std::cout << "################ INTERFACE" << std::endl;
        ISpaceMarine *sm = new AssaultTerminator();
        sm->battleCry();
        sm->rangedAttack();
        sm->meleeAttack();
        delete sm;
    }

    std::cout << std::endl;

    {
        std::cout << "================ SQUAD              =====================" << std::endl;
        Squad s;
        std::cout << "Count: " << s.getCount() << std::endl;
        std::cout << "Count (push): " << s.push(new TacticalMarine()) << std::endl;
        s.push(new TacticalMarine());
        s.push(new AssaultTerminator());
        s.push(new AssaultTerminator());
        std::cout << "Count: " << s.getCount() << std::endl;
        s.getUnit(0)->battleCry();
        s.getUnit(1)->battleCry();
        s.getUnit(2)->battleCry();
        s.getUnit(3)->battleCry();
        s.getUnit(3)->rangedAttack();
        s.getUnit(3)->meleeAttack();
        s.getUnit(0)->rangedAttack();
        s.getUnit(0)->meleeAttack();
        std::cout << s.getUnit(4)  << std::endl;
        std::cout << s.getUnit(-1) << std::endl;

        std::cout << "################ COPY" << std::endl;
        Squad s2(s);
        std::cout << "Copy   Count: " << s2.getCount() << std::endl;
        s2.push(new TacticalMarine());
        std::cout << "Copy   Count: " << s2.getCount() << std::endl;
        std::cout << "Origin Count: " << s.getCount() << std::endl;

        std::cout << "################ ASSIGN" << std::endl;
        Squad s3(s2);
        s3 = s;
        std::cout << "Copy   Count: " << s3.getCount() << std::endl;
        s3.push(new TacticalMarine());
        std::cout << "Copy   Count: " << s3.getCount() << std::endl;
        std::cout << "Origin Count: " << s.getCount() << std::endl;

        std::cout << "################ INTERFACE" << std::endl;
        ISquad *si = new Squad();
        si->push(new TacticalMarine());
        std::cout << si->getCount() << std::endl;
        si->getUnit(0)->battleCry();
        si->push(new AssaultTerminator());
        std::cout << si->getCount() << std::endl;
        si->getUnit(1)->battleCry();
        delete si;

        std::cout << "################ DESTROY" << std::endl;
    }

    return 0;
}
