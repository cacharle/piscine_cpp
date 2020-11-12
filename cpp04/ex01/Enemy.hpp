/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 13:23:40 by charles           #+#    #+#             */
/*   Updated: 2020/11/12 13:55:07 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>

class Enemy
{
public:
    Enemy(Enemy const& other);
    Enemy& operator=(Enemy const& other);
    virtual ~Enemy();

    Enemy(int hp, std::string const& type);

    std::string const& getType() const;
    int getHP() const;

    virtual void takeDamage(int amount);

protected:
    int         m_hp;
    std::string m_type;

private:
    Enemy();
};

#endif
