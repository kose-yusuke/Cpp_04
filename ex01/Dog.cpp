/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:07:32 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/18 13:42:40 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): Animal()
{
    this->_type = "Dog";
	this->_brain = new Brain;
    std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog &other): Animal()
{
	this->_brain = new Brain(*other._brain);
	*this = other;
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog Deconstructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog Copy Assignation operator called" << std::endl;
	if (this == &other)
		return *this;
	*this->_brain = *other._brain;
	this->_type = other._type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << this->getType() << " cries: Wan" << std::endl;
}


Brain *Dog::getBrain() const
{
	return (this->_brain);
}
