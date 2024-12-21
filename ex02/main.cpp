/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:10:49 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/18 13:58:23 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#define ANIMAL_NUM 20

int main()
{
    const Animal *TestAnimals[ANIMAL_NUM];
    for (int i = 0; i < ANIMAL_NUM; i++)
    {
        if (i % 2 == 0)
            TestAnimals[i] = new Dog();
        else
            TestAnimals[i] = new Cat();
    }
    for (int i = 0; i < ANIMAL_NUM; i++)
    {
        delete TestAnimals[i];
    }
    //shallowじゃなくてdeep copyかどうかテスト
    Dog originalDog;
    Dog copiedDog(originalDog);
    originalDog.getBrain()->getIdeas()[0] = "Original Dog's idea";
    copiedDog.getBrain()->getIdeas()[0] = "Copied Dog's idea";
    
    std::cout << "Original Dog's first idea: " << originalDog.getBrain()->getIdeas()[0] << std::endl;
    std::cout << "Copied Dog's first idea: " << copiedDog.getBrain()->getIdeas()[0] << std::endl;

    Cat originalCat;
    Cat copiedCat(originalCat);
    originalCat.getBrain()->getIdeas()[0] = "Original Cat's idea";
    copiedCat.getBrain()->getIdeas()[0] = "Copied Cat's idea";
    // //shallow copyだと, originalの内容も書き変わる
    std::cout << "Original Cat's first idea: " << originalCat.getBrain()->getIdeas()[0] << std::endl;
    std::cout << "Copied Cat's first idea: " << copiedCat.getBrain()->getIdeas()[0] << std::endl;

}

