/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 17:17:40 by charles           #+#    #+#             */
/*   Updated: 2020/11/13 14:41:04 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

# define LEARNED_MAX_SIZE 4

class MateriaSource : public IMateriaSource
{
public:
    MateriaSource();
    MateriaSource(MateriaSource const& other);
    MateriaSource& operator=(MateriaSource const& other);
    virtual ~MateriaSource();

    virtual void      learnMateria(AMateria* materia);
    virtual AMateria* createMateria(std::string const& type);

private:
    AMateria* m_learned[LEARNED_MAX_SIZE];
    int       m_learned_size;

    void destroyLearned();
};

#endif
