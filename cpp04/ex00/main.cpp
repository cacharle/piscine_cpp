/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 20:47:34 by charles           #+#    #+#             */
/*   Updated: 2020/11/12 13:11:26 by cacharle         ###   ########.fr       */
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
        std::cout << "Copied:   " << v_copied;
        std::cout << "Assigned: " << v_assigned;
        v.getPolymorphed();
    }

    std::cout << std::endl;

    {
        std::cout << "==================== PEON =====================" << std::endl;
        Peon p("Victoire");
        Peon p_copied(p);
        Peon p_assigned("baz");
        p_assigned = p;
        std::cout << "Copied:   " << p_copied;
        std::cout << "Assigned: " << p_assigned;
        p.getPolymorphed();
    }

    return 0;
}
