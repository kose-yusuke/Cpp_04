/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:11:43 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/17 12:07:18 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal{
    public : 
        Cat();
        Cat(const Cat &other);
        ~Cat();
        Cat &operator=(const Cat &other);
        void makeSound() const;
};

#endif