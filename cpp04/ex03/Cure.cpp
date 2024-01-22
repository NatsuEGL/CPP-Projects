/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:37:01 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/22 09:37:03 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){};
Cure::Cure(const Cure& name){
	type = name.type;
}
Cure& Cure::operator=(const Cure& name){
	if (this != &name)
		type = name.type;
	return *this;
}
Cure::~Cure(){}

Cure* Cure::clone() const {
	return (new Cure(*this));
}
void Cure::use(ICharacter& name){
        std::cout << "* heals " << name.getName() << "'s wounds *" << std::endl;
}

