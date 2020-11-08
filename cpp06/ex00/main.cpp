/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 10:54:10 by charles           #+#    #+#             */
/*   Updated: 2020/04/16 12:23:06 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

int main(int argc, char **argv)
{
    // if (argc != 2)
    // {
    //     std::cout << "Usage: " << argv[0] << " litteral" << std::endl;
    //     return 1;
    // }

    int i;

    std::istringstream("bonjour") >> i;


    std::cout << i << std::endl;

    return 0;
}
