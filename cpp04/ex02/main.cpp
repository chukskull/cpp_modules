/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:09:31 by snagat            #+#    #+#             */
/*   Updated: 2022/11/14 21:20:38 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"



int main()
{
    const Animal* meta[10];
 
    for(int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            meta[i] = new Dog();
        else
            meta[i] = new Cat();
    }
    for(int i= 0 ; i < 10; i++)
    {
        meta[i]->makeSound();
    }
    for(int i= 0 ; i < 10; i++)
    {
        delete meta[i];
    }
    return 0;
} 
