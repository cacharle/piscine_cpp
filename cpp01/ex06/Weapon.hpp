/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 16:34:31 by cacharle          #+#    #+#             */
/*   Updated: 2020/11/09 11:08:36 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
public:
    Weapon(std::string t);
    std::string const& getType() const;
    void               setType(std::string const& t);

private:
    std::string type;  // subject wants litteraly `type`
};

#endif
