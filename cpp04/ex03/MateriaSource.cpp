/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 17:19:10 by charles           #+#    #+#             */
/*   Updated: 2020/11/12 15:45:23 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {}

MateriaSource::MateriaSource(MateriaSource const& other) { *this = other; }

void MateriaSource::operator=(MateriaSource const& other)
{
    return *this;
}

MateriaSource::~MateriaSource() {}

void MateriaSource::learnMateria(AMateria* materia)
{
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    return NULL;
}
