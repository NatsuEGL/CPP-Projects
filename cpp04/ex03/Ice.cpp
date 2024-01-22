/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:37:22 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/22 09:37:25 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){};

Ice::Ice(const Ice& name){
	type = name.type;
}
Ice& Ice::operator=(const Ice& name){
	if (this != &name)
		type = name.type;
	return *this;
}
Ice::~Ice(){}

Ice* Ice::clone() const {
	return (new Ice(*this));
}

void Ice::use(ICharacter& name){
	 std::cout << "* shoots an ice bolt at " << name.getName() << " *" << std::endl;
}