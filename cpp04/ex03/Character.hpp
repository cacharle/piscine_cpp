/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 16:44:43 by charles           #+#    #+#             */
/*   Updated: 2020/11/13 14:17:54 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "ICharacter.hpp"

# define INVENTORY_MAX_SIZE 4

class Character : public ICharacter
{
public:
    Character(Character const& other);
    Character& operator=(Character const& other);
    virtual ~Character();

    Character(std::string const& name);
    virtual std::string const& getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);

private:
    AMateria*   m_inventory[INVENTORY_MAX_SIZE];
    int         m_inventory_size;
    std::string m_name;

    void destroyInventory();

    Character();
};

#endif
