/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:07:20 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/18 13:47:42 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): Animal()
{
    this->_type = "Cat";
	this->_brain = new Brain;
    std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat &other): Animal()
{
	this->_brain = new Brain(*other._brain);
	*this = other;
	std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat Deconstructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat Copy Assignation operator called" << std::endl;
	if (this == &other)
		return *this;
	*this->_brain = *other._brain;
	this->_type = other._type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << this->getType() << " cries: Nyan" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (this->_brain);
}
