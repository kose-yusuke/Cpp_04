/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:11:43 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/17 12:15:07 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class WrongAnimal {
    protected : 
        std::string _type;
    
    public : 
        WrongAnimal();
        WrongAnimal(const WrongAnimal &other);
        ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &other);
        void makeSound() const;
        std::string getType() const;
};

#endif