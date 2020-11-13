/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 17:15:52 by charles           #+#    #+#             */
/*   Updated: 2020/11/13 14:23:42 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <string>
# include "AMateria.hpp"

class IMateriaSource
{
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria* materia) = 0;
    virtual AMateria* createMateria(std::string const& type) = 0;
};

#endif
