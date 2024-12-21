/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:30:04 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/18 13:43:40 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    for (int i=0; i < 100; i++)
        this->_ideas[i] = other._ideas[i];
    std::cout << "Brain Copy constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other) {
    std::cout << "Brain Copy assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    for (int i=0; i<100;i++)
        this->_ideas[i] = other._ideas[i];
    return *this;
}

std::string *Brain::getIdeas()
{
	return (this->_ideas);
}
