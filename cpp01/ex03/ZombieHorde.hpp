/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 09:52:18 by charles           #+#    #+#             */
/*   Updated: 2020/11/09 12:45:34 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

# include <cstdlib>
# include <string>
# include <iostream>
# include "Zombie.hpp"

class ZombieHorde
{
public:
    ZombieHorde(int n);  // subject wants int
    ~ZombieHorde();
    void announce();

private:
    size_t  m_size;
    Zombie* m_horde;
};

#endif
