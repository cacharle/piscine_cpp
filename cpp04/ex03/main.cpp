/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 17:58:01 by charles           #+#    #+#             */
/*   Updated: 2020/11/17 08:33:22 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
    {
        std::cout << "================== SUBJECT MAIN ==================" << std::endl;
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
    }

    Character ch("YO");

    std::cout << std::endl;

    {
        std::cout << "================== ICE          ==================" << std::endl;
        Ice i;
        std::cout << "Type: " << i.getType() << ", XP: " << i.getXP() << std::endl;
        i.use(ch);
        std::cout << "Type: " << i.getType() << ", XP: " << i.getXP() << std::endl;
        Ice i2(i);
        std::cout << "Type: " << i2.getType() << ", XP: " << i2.getXP() << std::endl;
        Ice i3;
        i3 = i2;
        std::cout << "Type: " << i2.getType() << ", XP: " << i2.getXP() << std::endl;
        AMateria *i4 = new Ice(i);
        std::cout << "Type: " << i4->getType() << ", XP: " << i4->getXP() << std::endl;

        std::cout << "################## NO ASSIGN TYPE" << std::endl;
        AMateria *c = new Cure();
        *c = i3;
        std::cout << "Type: " << c->getType() << ", XP: " << c->getXP() << std::endl;

        std::cout << "################## CLONE" << std::endl;
        AMateria *cl = i3.clone();
        std::cout << "Type: " << cl->getType() << ", XP: " << cl->getXP() << std::endl;

        std::cout << "################## USE" << std::endl;
        i.use(ch);
        std::cout << "Type: " << i.getType() << ", XP: " << i.getXP() << std::endl;
        i.use(ch);
        std::cout << "Type: " << i.getType() << ", XP: " << i.getXP() << std::endl;
        i.use(ch);
        std::cout << "Type: " << i.getType() << ", XP: " << i.getXP() << std::endl;
        i.use(ch);
        std::cout << "Type: " << i.getType() << ", XP: " << i.getXP() << std::endl;
        i.use(ch);
        std::cout << "Type: " << i.getType() << ", XP: " << i.getXP() << std::endl;

        delete cl;
        delete c;
        delete i4;
    }

    std::cout << std::endl;

    {
        std::cout << "================== ICE          ==================" << std::endl;
        Cure c;
        std::cout << "Type: " << c.getType() << ", XP: " << c.getXP() << std::endl;
        c.use(ch);
        std::cout << "Type: " << c.getType() << ", XP: " << c.getXP() << std::endl;
        Cure c2(c);
        std::cout << "Type: " << c2.getType() << ", XP: " << c2.getXP() << std::endl;
        Cure c3;
        c3 = c2;
        std::cout << "Type: " << c2.getType() << ", XP: " << c2.getXP() << std::endl;
        AMateria *c4 = new Cure(c);
        std::cout << "Type: " << c4->getType() << ", XP: " << c4->getXP() << std::endl;

        std::cout << "################## NO ASSIGN TYPE" << std::endl;
        AMateria *i = new Ice();
        *i = c3;
        std::cout << "Type: " << i->getType() << ", XP: " << i->getXP() << std::endl;

        std::cout << "################## CLONE" << std::endl;
        AMateria *cl = c3.clone();
        std::cout << "Type: " << cl->getType() << ", XP: " << cl->getXP() << std::endl;

        std::cout << "################## USE" << std::endl;
        c.use(ch);
        std::cout << "Type: " << c.getType() << ", XP: " << c.getXP() << std::endl;
        c.use(ch);
        std::cout << "Type: " << c.getType() << ", XP: " << c.getXP() << std::endl;
        c.use(ch);
        std::cout << "Type: " << c.getType() << ", XP: " << c.getXP() << std::endl;
        c.use(ch);
        std::cout << "Type: " << c.getType() << ", XP: " << c.getXP() << std::endl;
        c.use(ch);
        std::cout << "Type: " << c.getType() << ", XP: " << c.getXP() << std::endl;

        delete cl;
        delete i;
        delete c4;
    }

    std::cout << std::endl;

    {
        std::cout << "================== CHARACTER    ==================" << std::endl;
        Character c("Jean-Didier");
        std::cout << "Name: " << c.getName() << std::endl;
        Character c2(c);
        std::cout << "Name: " << c2.getName() << std::endl;
        Character c3("SHOULD NOT BE PRINTED");
        c3 = c;
        std::cout << "Name: " << c3.getName() << std::endl;

        std::cout << "################## EQUIP/USE" << std::endl;
        c.equip(new Ice());
        c.equip(new Cure());
        c.use(0, ch);
        c.use(1, ch);
        c.equip(new Cure());
        c.equip(new Ice());
        c.use(2, ch);
        c.use(3, ch);
        c.use(-1, ch);
        c.use(4, ch);
        c.unequip(0);
        c.use(0, ch);
        c.use(3, ch);
        c.unequip(0);
        c.use(0, ch);
        c.use(2, ch);
        c.unequip(0);
        c.use(0, ch);
        c.use(1, ch);
        c.unequip(0);
        c.use(0, ch);
        c.unequip(0);
        c.unequip(0);
        c.unequip(0);
        c.unequip(0);
        c.unequip(0);
        c.equip(NULL);
        c.use(0, ch);
        c.equip(NULL);
        c.use(1, ch);

        std::cout << "################## DEEP COPY" << std::endl;
        c.equip(new Ice());
        c.use(0, ch);
        Character copy(c);
        std::cout << "Copied name: " << copy.getName() << std::endl;
        copy.use(0, ch);
        c.equip(new Cure());
        c.use(1, ch);
        copy.use(1, ch);
        Character assigned("SHOULD NOT BE PRINTED");
        assigned = c;
        std::cout << "Assign name: " << copy.getName() << std::endl;
        assigned.use(1, ch);
        c.equip(new Ice());
        c.use(2, ch);
        assigned.use(2, ch);

        std::cout << "################## INTERFACE" << std::endl;
        ICharacter *ic = new Character(c);
        std::cout << "Interface name: " << ic->getName() << std::endl;
        ic->use(0, ch);
        ic->use(1, ch);
        ic->use(2, ch);
        ic->equip(new Ice());
        ic->use(3, ch);
        ic->unequip(1);
        ic->use(1, ch);
        delete ic;
    }

    std::cout << std::endl;

    {
        std::cout << "================== MATERIA SRC  ==================" << std::endl;
        MateriaSource ms;
        ms.learnMateria(new Ice());
        MateriaSource ms2(ms);
        MateriaSource ms3;
        ms3.learnMateria(new Cure());
        ms3 = ms;
        std::cout << ms3.createMateria("cure") << std::endl;
        AMateria *m;
        m = ms.createMateria("ice");
        std::cout << "Type: " << m->getType() << ", XP: " << m->getXP() << std::endl;
        delete m;
        m = ms2.createMateria("ice");
        std::cout << "Type: " << m->getType() << ", XP: " << m->getXP() << std::endl;
        delete m;
        m = ms3.createMateria("ice");
        std::cout << "Type: " << m->getType() << ", XP: " << m->getXP() << std::endl;
        delete m;

        m = ms.createMateria("");
        std::cout << m << std::endl;
        m = ms.createMateria("foo");
        std::cout << m << std::endl;
        ms.learnMateria(NULL);

        ms.learnMateria(new Ice());
        ms.learnMateria(new Ice());
        ms.learnMateria(new Ice());
        ms.learnMateria(new Ice());
        ms.learnMateria(new Ice());
        ms.learnMateria(new Ice());
        ms.learnMateria(new Ice());
        m = ms.createMateria("ice");
        std::cout << "Type: " << m->getType() << ", XP: " << m->getXP() << std::endl;
        delete m;

        std::cout << "################## INTERFACE" << std::endl;
        IMateriaSource *ims = new MateriaSource(ms2);
        m = ims->createMateria("ice");
        std::cout << "Type: " << m->getType() << ", XP: " << m->getXP() << std::endl;
        delete m;
        ims->learnMateria(new Cure());
        m = ims->createMateria("cure");
        std::cout << "Type: " << m->getType() << ", XP: " << m->getXP() << std::endl;
        delete m;
        delete ims;
    }
}
