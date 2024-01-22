/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:24:54 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/22 15:19:44 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "WrongAnimal Default Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& name)
{
	std::cout << "WrongAnimal Copy Constructor" << std::endl;
	*this = name;
}

std::string WrongAnimal::getType() const
{
	return (type);
}

WrongAnimal	 &WrongAnimal::operator=(const WrongAnimal &name)
{
	std::cout << "WrongAnimal copy assignement " << std::endl;
	if (this != &name)
		type = name.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor " << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Sound " << std::endl;
}
