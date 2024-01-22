/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:24:36 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/22 15:19:15 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat") , b(new Brain)
{
    std::cout << "Cat Default constructor " << std::endl;
    type = "Cat";
}
Cat::Cat(const Cat& name)
{
    std::cout << "Cat copy constructor " << std::endl;
    *this = name;
}
Cat& Cat::operator=(const Cat& name)
{
	std::cout << "Cat copy assignement " << std::endl;
	if (this != &name)
    {
		type = name.type;
        b = new Brain(*name.b);
    }
	return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor " << std::endl;
    delete b;
}
//------------------------------------------
void Cat::makeSound() const
{
	std::cout << "Cat Meow : Meoooow" << std::endl;
}
//-----------------------------------
