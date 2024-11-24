/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:43:55 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/11/24 15:47:39 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    private:
		AMateria	*_learnInventory[4];
    public:
        MateriaSource();
		    MateriaSource(MateriaSource const &other);
		    ~MateriaSource();
        MateriaSource const	&operator=(MateriaSource const &other);
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
};

		// int 				inLearnInventory(AMateria *materia);


#endif
