/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 12:52:39 by cacharle          #+#    #+#             */
/*   Updated: 2020/11/10 08:31:46 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{
public:
    Human();
    std::string	 identify() const;
    Brain const& getBrain() const;

private:
    const Brain m_brain;
};

#endif
