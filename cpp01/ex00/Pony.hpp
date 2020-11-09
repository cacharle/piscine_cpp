/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 09:26:16 by charles           #+#    #+#             */
/*   Updated: 2020/11/09 09:54:25 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
public:
    Pony(std::string const& name, int weight, int maxSpeed);
    ~Pony();
    void sayHello();
    void run();

private:
    std::string m_name;
    int m_weight;
    int m_maxSpeed;
};

#endif
