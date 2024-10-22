/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:31:40 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/22 14:31:42 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "AMateria created" << std::endl;
}

AMateria::AMateria(AMateria const &other)
{
	*this = other;
	std::cout << "AMateria copied" << std::endl;
}

AMateria const	&AMateria::operator=(AMateria const &other)
{
	this->_type = other._type;
	std::cout << "AMateria Assignment Operator Called" << std::endl;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria destroyed" << std::endl;
}

std::string const &AMateria::getType() const {
    return _type;
}

void AMateria::use(ICharacter& target) {
    (void)target;
}
