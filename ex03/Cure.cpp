/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:09:59 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/22 14:10:41 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure constructor" << std::endl;
}

Cure::Cure(Cure const &other) : AMateria("cure")
{
    *this = other;
    std::cout << "Cure copied" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure destroyed" << std::endl;
}

Cure &Cure::operator=(Cure const &other)
{
    *this = other;
    std::cout << "Cure Assignment Operator Called" << std::endl;
    return (*this);
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

