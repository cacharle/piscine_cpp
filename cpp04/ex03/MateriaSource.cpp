/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 17:19:10 by charles           #+#    #+#             */
/*   Updated: 2020/04/14 17:51:07 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{

}

MateriaSource::MateriaSource(MateriaSource const& other)
{
    *this = other;
}

void MateriaSource::operator=(MateriaSource const& other)
{

}

MateriaSource::~MateriaSource()
{

}

void MateriaSource::learnMateria(AMateria* materia)
{

}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    return nullptr;
}
