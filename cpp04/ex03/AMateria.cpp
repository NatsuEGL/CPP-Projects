/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:36:24 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/22 09:36:26 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("Default"){};
AMateria::AMateria(std::string const name) : type(name){};
AMateria::~AMateria(){}
AMateria::AMateria(const AMateria& name){
	type = name.type;
}
AMateria& AMateria::operator=(const AMateria& name){
	if (this != &name)
		type = name.type;
	return *this;
}
std::string const& AMateria::getType() const{return type;}

