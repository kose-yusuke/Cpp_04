/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:20:45 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/22 11:30:05 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{
	std::cout << "ICharacter constructor" << std::endl;
}

ICharacter::ICharacter(ICharacter const &other)
{
	*this = other;
	std::cout << "ICharacter copied" << std::endl;
}

ICharacter const	&ICharacter::operator=(ICharacter const &other)
{
	*this = other;
	std::cout << "ICharacter Assignment Operator Called" << std::endl;
	return (*this);
}
