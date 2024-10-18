/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:11:43 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/18 14:09:52 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    protected : 
        std::string _type;
    
    public : 
        Animal();
        Animal(const Animal &other);
        virtual ~Animal();
        Animal &operator=(const Animal &other);
        virtual void makeSound() const = 0;
        std::string getType() const;
};

#endif