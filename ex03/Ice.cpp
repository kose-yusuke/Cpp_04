/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:09:33 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/22 14:54:05 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice constructor" << std::endl;
}

Ice::Ice(Ice const &other) : AMateria("ice")
{
    *this = other;
    std::cout << "Ice copied" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice destroyed" << std::endl;
}

Ice &Ice::operator=(Ice const &other)
{
    std::cout << "Ice Assignment Operator Called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}