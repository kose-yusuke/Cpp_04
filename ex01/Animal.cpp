/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:27:13 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/11/09 13:07:45 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():_type("default")
{
    std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Animal::~Animal()
{
    std::cout << "Destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return *this;
}

std::string Animal::getType()const
{
    return (this->_type);
}

void Animal::makeSound()const
{
	std::cout << "Animals cry their sound!" << std::endl;
}