/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:44:46 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/22 11:23:51 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
	std::cout << "IMateriaSource constructor" << std::endl;
}

IMateriaSource::IMateriaSource(IMateriaSource const &other)
{
	*this = other;
	std::cout << "IMateriaSource copied" << std::endl;
}

IMateriaSource const &IMateriaSource::operator=(IMateriaSource const &other)
{
	*this = other;
	std::cout << "IMateriaSource Assignment Operator Called" << std::endl;
	return (*this);
}
