/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:26:06 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/22 15:25:43 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>


class Animal{
    protected : 
        std::string type;
    public : 

    Animal();
    Animal(const std::string& name);
    Animal(const Animal& name);
    virtual ~Animal();
    Animal& operator=(const Animal& name);
    virtual void makeSound() const;
    std::string getType() const;
};


#endif