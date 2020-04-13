/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 09:26:16 by charles           #+#    #+#             */
/*   Updated: 2020/04/13 09:27:49 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

class Pony
{
public:
    Pony(int weight, int maxSpeed);
    void sayHello();
    void run();
private:
    int m_weight;
    int m_maxSpeed;
};

#endif
