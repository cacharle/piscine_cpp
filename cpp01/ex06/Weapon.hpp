/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 16:34:31 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/13 10:16:46 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
public:
    Weapon(std::string t);
    const std::string& getType() const;
    void setType(const std::string& t);

private:
    std::string type;  // subject want litteraly `type`
};

#endif
