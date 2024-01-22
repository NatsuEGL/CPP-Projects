/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:24:47 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/22 14:53:39 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"


class Dog : public AAnimal{
    private : 
        Brain *b;
    public : 

    Dog();
    Dog(const Dog& name);
    Dog& operator=(const Dog& name);
   virtual ~Dog();
    void makeSound()const;

};


#endif