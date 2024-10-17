/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:07:20 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/17 12:23:18 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    this->_type = "Cat";
    std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat &other): Animal()
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = other;
}

Cat::~Cat()
{
	std::cout << "Cat Deconstructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat Copy Assignation operator called" << std::endl;
	if (this == &other)
		return *this;

	this->_type = other._type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << this->getType() << " cries: Nyan" << std::endl;
}