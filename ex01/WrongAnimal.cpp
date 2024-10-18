/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:27:13 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/17 11:44:15 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():_type("default")
{
    std::cout << "Default Wrong WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "Copy Wrong WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong WrongAnimal Destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    std::cout << "Wrong WrongAnimal Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return *this;
}

std::string WrongAnimal::getType()const
{
    return (this->_type);
}

void WrongAnimal::makeSound()const
{
	std::cout << "WrongAnimals cry weird sound!" << std::endl;
}