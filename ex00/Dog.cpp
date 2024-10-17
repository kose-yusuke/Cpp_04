/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:07:32 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/17 12:23:24 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    this->_type = "Dog";
    std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog &other): Animal()
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = other;
}

Dog::~Dog()
{
	std::cout << "Dog Deconstructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog Copy Assignation operator called" << std::endl;
	if (this == &other)
		return *this;

	this->_type = other._type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << this->getType() << " cries: Wan" << std::endl;
}
