/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:24:58 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/22 15:19:37 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat Default Constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& name)
{
	std::cout << "WrongCat copy Constructor " << std::endl;
	*this = name;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat Cat : Meoooow.." << std::endl;
}


WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& name)
{
	std::cout << "WrongCat copy assignement " << std::endl;
	if (this != &name)
	{
		type = name.type;
	}
	return (*this);
}
