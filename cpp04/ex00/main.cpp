/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 20:47:34 by charles           #+#    #+#             */
/*   Updated: 2020/12/11 10:29:53 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
    {
        std::cout << "==================== SUBJECT MAIN =====================" << std::endl;
        Sorcerer robert("Robert", "the Magnificent");
        Victim jim("Jimmy");
        Peon joe("Joe");
        std::cout << robert << jim << joe;
        robert.polymorph(jim);
        robert.polymorph(joe);
    }

    std::cout << std::endl;

    {
        std::cout << "==================== SORCERER =====================" << std::endl;
        Sorcerer s("DidierLeSorcier", "The cunt");
        Sorcerer s_copied(s);
        Sorcerer s_assigned("foo", "yep clock");
        s_assigned = s;
        Sorcerer *s_ptr = new Sorcerer("Foo", "Bar");
        std::cout << *s_ptr;
        s_ptr->polymorph(Peon("Yep"));
        delete s_ptr;
        std::cout << "Copied:   " << s_copied;
        std::cout << "Assigned: " << s_assigned;
    }

    std::cout << std::endl;

    {
        std::cout << "==================== VICTIM =====================" << std::endl;
        Victim v("Victoire");
        Victim v_copied(v);
        Victim v_assigned("bar");
        v_assigned = v;
        Victim *v_ptr = new Victim("Foo");
        std::cout << *v_ptr;
        v_ptr->getPolymorphed();
        delete v_ptr;
        std::cout << "Copied:   " << v_copied;
        std::cout << "Assigned: " << v_assigned;
        v.getPolymorphed();
    }

    std::cout << std::endl;

    {
        std::cout << "==================== PEON =====================" << std::endl;
        Peon p("Pionnier");
        Peon p_copied(p);
        Peon p_assigned("baz");
        p_assigned = p;
        Peon *p_ptr = new Peon("Foo");
        std::cout << *p_ptr;
        p_ptr->getPolymorphed();
        delete p_ptr;
        std::cout << "Copied:   " << p_copied;
        std::cout << "Assigned: " << p_assigned;
        p.getPolymorphed();
    }

    std::cout << std::endl;

    {
        std::cout << "==================== RAT  =====================" << std::endl;
        Rat r("Ratteur");
        std::cout << r;
        Rat r_copied(r);
        Rat r_assigned("baz");
        r_assigned = r;
        Rat *r_ptr = new Rat("Foo");
        std::cout << *r_ptr;
        r_ptr->getPolymorphed();
        delete r_ptr;
        std::cout << "Copied:   " << r_copied;
        std::cout << "Assigned: " << r_assigned;
        r.getPolymorphed();
        Sorcerer s("Sorcier", "Yes man");
        s.polymorph(r);
    }

    return 0;
}
