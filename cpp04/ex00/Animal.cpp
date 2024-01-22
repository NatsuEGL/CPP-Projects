/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:26:04 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/22 14:59:23 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal()
{
    std::cout << "Animal Default constructor " << std::endl;
    type = "Animal";
}
Animal::Animal(const std::string& name)
{
    std::cout << "Animal Parametriezed constructor " << std::endl;
    type = name;
}
Animal::Animal(const Animal& name)
{
    std::cout << "Animal copy constructor " << std::endl;
    *this = name;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor " << std::endl;
}
//---------------------------------------- operator
Animal& Animal::operator=(const Animal& name)
{
    std::cout << "Animal copy Assignement " << std::endl;
    if (this != &name)
    {
        type = name.type;
    }
    return *this;
}

//---------------------------------------set && get

std::string Animal::getType() const{
    return type;
}
//-------------------------------------------------

void Animal::makeSound() const
{
	std::cout << "No specific sound !" << std::endl;
}
