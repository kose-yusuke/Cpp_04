/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:30:06 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/18 11:10:25 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
    private:
        std::string _ideas[100];

    public:
        Brain();
        Brain(const Brain &other);
        virtual ~Brain();
        Brain &operator=(const Brain &other);
        std::string *getIdeas();
};



#endif