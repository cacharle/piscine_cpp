/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 20:40:50 by charles           #+#    #+#             */
/*   Updated: 2020/04/13 20:59:08 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class Victim
{
public:
    Victim(std::string name);
    void operator=(Victim const& other);
    Victim(Victim const& other);
    ~Victim();

    std::string const& getName() const;
    virtual void getPolymorphed() const;

protected:
    std::string m_name;

private:
    Victim();
};

std::ostream& operator<<(std::ostream& out, Victim const& v);

#endif