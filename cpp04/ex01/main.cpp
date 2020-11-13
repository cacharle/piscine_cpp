/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 09:05:58 by charles           #+#    #+#             */
/*   Updated: 2020/11/13 12:00:52 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <climits>
#include "Character.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
    {
        std::cout << "================ SUBJECT MAIN  =====================" << std::endl;
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
        delete pr;
        delete pf;
    }

    std::cout << std::endl;

    {
        std::cout << "================ PLASMA RIFLE  =====================" << std::endl;
        PlasmaRifle pr;
        PlasmaRifle pr2(pr);
        PlasmaRifle pr3;
        pr3 = pr2;
        std::cout << "Name:    " << pr.getName()   << std::endl;
        std::cout << "AP Cost: " << pr.getAPCost() << std::endl;
        std::cout << "Damage:  " << pr.getDamage() << std::endl;
        pr.attack();
        pr2.attack();
        pr3.attack();
        std::cout << "################ VIRTUAL" << std::endl;
        AWeapon *w = &pr;
        std::cout << "Name:    " << w->getName()   << std::endl;
        std::cout << "AP Cost: " << w->getAPCost() << std::endl;
        std::cout << "Damage:  " << w->getDamage() << std::endl;
        w->attack();
    }

    std::cout << std::endl;

    {
        std::cout << "================ POWER FIST  =====================" << std::endl;
        PowerFist pf;
        PowerFist pf2(pf);
        PowerFist pf3;
        pf3 = pf2;
        std::cout << "Name:    " << pf.getName()   << std::endl;
        std::cout << "AP Cost: " << pf.getAPCost() << std::endl;
        std::cout << "Damage:  " << pf.getDamage() << std::endl;
        pf.attack();
        pf2.attack();
        pf3.attack();
        std::cout << "################ VIRTUAL" << std::endl;
        AWeapon *w = &pf;
        std::cout << "Name:    " << w->getName()   << std::endl;
        std::cout << "AP Cost: " << w->getAPCost() << std::endl;
        std::cout << "Damage:  " << w->getDamage() << std::endl;
        w->attack();
    }

    std::cout << std::endl;

    {
        std::cout << "================ ENEMY       =====================" << std::endl;
        Enemy e(2000, "Titan");
        Enemy e2(e);
        Enemy e3(0, "should not be printed");
        e3 = e2;
        std::cout << "Type: " << e.getType()  << ", HP: " << e.getHP()  << std::endl;
        std::cout << "Type: " << e2.getType() << ", HP: " << e2.getHP() << std::endl;
        std::cout << "Type: " << e3.getType() << ", HP: " << e3.getHP() << std::endl;
        std::cout << "################ TAKE DAMAGE" << std::endl;
        std::cout << "HP: " << e.getHP() << std::endl;
        e.takeDamage(10);
        std::cout << "HP: " << e.getHP() << std::endl;
        e.takeDamage(-1);
        std::cout << "HP: " << e.getHP() << std::endl;
        e.takeDamage(INT_MIN);
        std::cout << "HP: " << e.getHP() << std::endl;
        e.takeDamage(0);
        std::cout << "HP: " << e.getHP() << std::endl;
        e.takeDamage(3000);
        std::cout << "HP: " << e.getHP() << std::endl;
    }

    std::cout << std::endl;

    {
        std::cout << "================ SUPER MUTANT ====================" << std::endl;
        SuperMutant m;
        SuperMutant m2(m);
        SuperMutant m3;
        m3 = m2;
        std::cout << "Type: " << m.getType()  << ", HP: " << m.getHP()  << std::endl;
        std::cout << "Type: " << m2.getType() << ", HP: " << m2.getHP() << std::endl;
        std::cout << "Type: " << m3.getType() << ", HP: " << m3.getHP() << std::endl;
        std::cout << "################ TAKE DAMAGE" << std::endl;
        std::cout << "HP: " << m.getHP() << std::endl;
        m.takeDamage(10);
        std::cout << "HP: " << m.getHP() << std::endl;
        m.takeDamage(-1);
        std::cout << "HP: " << m.getHP() << std::endl;
        m.takeDamage(INT_MIN);
        std::cout << "HP: " << m.getHP() << std::endl;
        m.takeDamage(0);
        std::cout << "HP: " << m.getHP() << std::endl;
        m.takeDamage(180);
        std::cout << "HP: " << m.getHP() << std::endl;
    }

    std::cout << std::endl;

    {
        std::cout << "================ RAD SCORPION ====================" << std::endl;
        RadScorpion s;
        RadScorpion s2(s);
        RadScorpion s3;
        s3 = s2;
        std::cout << "Type: " << s.getType()  << ", HP: " << s.getHP()  << std::endl;
        std::cout << "Type: " << s2.getType() << ", HP: " << s2.getHP() << std::endl;
        std::cout << "Type: " << s3.getType() << ", HP: " << s3.getHP() << std::endl;
        std::cout << "################ TAKE DAMAGE" << std::endl;
        std::cout << "HP: " << s.getHP() << std::endl;
        s.takeDamage(10);
        std::cout << "HP: " << s.getHP() << std::endl;
        s.takeDamage(-1);
        std::cout << "HP: " << s.getHP() << std::endl;
        s.takeDamage(INT_MIN);
        std::cout << "HP: " << s.getHP() << std::endl;
        s.takeDamage(0);
        std::cout << "HP: " << s.getHP() << std::endl;
        s.takeDamage(90);
        std::cout << "HP: " << s.getHP() << std::endl;
    }

    std::cout << std::endl;

    {
        std::cout << "================ CHARACTER    ====================" << std::endl;
        Character c("Jean-Didier");
        Character c2(c);
        Character c3("should not be displayed");
        c3 = c2;
        std::cout << c;
        std::cout << c2;
        std::cout << c3;

        std::cout << "################ ATTACK NO WEAPON" << std::endl;
        Enemy* r = new RadScorpion();
        c.attack(r);
        Enemy* s = new SuperMutant();
        c.attack(s);

        std::cout << "################ EQUIP" << std::endl;
        PowerFist pf;
        c.equip(&pf);
        c.attack(r);
        c.attack(s);
        std::cout << c;
        PlasmaRifle pr;
        c.equip(&pr);
        c.attack(r);
        c.attack(s);
        std::cout << c;
        c.attack(s);
        c.attack(s);
        c.attack(s);
        c.recoverAP();
        c.recoverAP();
        c.attack(s);
        c.attack(s);
        c.attack(s);
        c.attack(s);
        c.attack(s);

        std::cout << "################ RECOVER AP" << std::endl;
        std::cout << c;
        c.recoverAP();
        std::cout << c;
        c.recoverAP();
        std::cout << c;
        c.recoverAP();
        std::cout << c;
        c.recoverAP();
        std::cout << c;
        c.recoverAP();
        std::cout << c;
        c.attack(r);

        // std::cout << "################ DESTRUCTORS" << std::endl;
    }

    return 0;
}
