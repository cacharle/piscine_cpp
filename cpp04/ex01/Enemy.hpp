/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 13:23:40 by charles           #+#    #+#             */
/*   Updated: 2020/04/14 14:13:07 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>

class Enemy
{
public:
    Enemy(Enemy const& other);
    void operator=(Enemy const& other);
    virtual ~Enemy();

    Enemy(int hp, std::string const& type);

    std::string const& getType() const;
    int getHP() const;

    virtual void takeDamage(int amount);

protected:
    Enemy();

    int m_hp;
    std::string m_type;
};

#endif
