/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:24:45 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/22 15:18:21 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default constructor " << std::endl;
    type = "Dog";
}
Dog::Dog(const Dog& name)
{
    std::cout << "Dog copy constructor " << std::endl;
    *this = name;
}
Dog& Dog::operator=(const Dog& name)
{
	std::cout << "Dog copy assignement " << std::endl;
	if (this != &name)
		type = name.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Dog Bark : Woof Woof" << std::endl;
}
Dog::~Dog()
{
    std::cout << "Dog Destructor " << std::endl;
}