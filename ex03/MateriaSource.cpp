/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:44:46 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/22 14:50:02 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->_learnInventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	*this = other;
	std::cout << "MateriaSource copied" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnInventory[i])
			delete this->_learnInventory[i];
	}
	std::cout << "MateriaSource destroyed" << std::endl;
}

MateriaSource const &MateriaSource::operator=(MateriaSource const &other)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnInventory[i])
			delete this->_learnInventory[i];
		if (other._learnInventory[i])
			this->_learnInventory[i] = other._learnInventory[i]->clone();
		else
			this->_learnInventory[i] = NULL;
	}
	std::cout << "MateriaSource Assignment Operator Called" << std::endl;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_learnInventory[i])
		{
			this->_learnInventory[i] = materia->clone();
			std::cout << "Learned " << materia->getType() << " materia" << std::endl;
			return;
		}
	}
	std::cout << "Cannot learn materia, inventory is full!" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnInventory[i] && this->_learnInventory[i]->getType() == type)
		{
			std::cout << "Created " << type << " materia" << std::endl;
			return (this->_learnInventory[i]->clone());
		}
	}
	std::cout << "Unknown materia type" << std::endl;
	return (0);
}

