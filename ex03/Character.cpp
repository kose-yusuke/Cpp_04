/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:20:40 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/22 14:45:18 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name("default"), _inventory()
{
	std::cout << "Character created constructor" << std::endl;
}

Character::Character(std::string const &name): _name(name), _inventory()
{
	std::cout << "Character created constructor" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "Character destroyed" << std::endl;
}

Character::Character(Character const &other)
{
	this->_name = other._name;
	for (int i = 0; i < 4; i++)
	{
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i];
	}
	std::cout << "Character copied" << std::endl;
}

Character &Character::operator=(const Character &other)
{
	this->_name = other._name;
	for (int i = 0; i < 4; i++)
	{
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i];
	}
	std::cout << "Character Assignment Operator Called" << std::endl;
	return (*this);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			std::cout << "Equipped " << m->getType() << " to " << this->_name << "'s inventory at index " << i << std::endl;
			return;
		}
	}
	std::cout << "Cannot equip materia, inventory is full!" << std::endl;
}

std::string const &Character::getName() const {
    return this->_name;
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4 && this->_inventory[idx]) 
    {
        std::cout << "Unequipped " << this->_inventory[idx]->getType() << " from " << this->_name << "'s inventory at index " << idx << std::endl;
        this->_inventory[idx] = NULL;
    } 
    else if (idx < 0 || idx >= 4) 
    {
        std::cout << "Cannot unequip materia, invalid index " << idx << std::endl;
    } 
    else {
        std::cout << "Cannot unequip materia, index " << idx << " is empty!" << std::endl;
    }
}

void Character::use(int idx, ICharacter &target) {
    if (idx >= 0 && idx < 4 && this->_inventory[idx]) 
    {
        this->_inventory[idx]->use(target);
    } 
    else if (idx < 0 || idx >= 4) 
    {
        std::cout << "Cannot use materia, invalid index " << idx << std::endl;
    } 
    else 
    {
        std::cout << "Cannot use materia, index " << idx << " is empty!" << std::endl;
    }
}
