/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:26:04 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/20 10:26:36 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"


AAnimal::AAnimal()
{
    std::cout << "AAnimal Default constructor " << std::endl;
    type = "AAnimal";
}
AAnimal::AAnimal(const std::string& name)
{
    std::cout << "AAnimal Parametriezed constructor " << std::endl;
    type = name;
}
AAnimal::AAnimal(const AAnimal& name)
{
    std::cout << "AAnimal copy constructor " << std::endl;
    *this = name;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal Destructor " << std::endl;
}
//---------------------------------------- operator
AAnimal& AAnimal::operator=(const AAnimal& name)
{
    std::cout << "AAnimal copy Assignement " << std::endl;
    if (this != &name)
    {
        type = name.type;
    }
    return *this;
}

//---------------------------------------get

std::string AAnimal::getType() const{
    return type;
}
//-------------------------------------------------

void AAnimal::makeSound() const
{
	std::cout << "No specific sound !" << std::endl;
}
