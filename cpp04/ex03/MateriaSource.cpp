/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:38:05 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/22 09:44:36 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource() : count(0)
{
	for (int i = 0; i < 4; ++i)
	{
		learning[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& name){
	*this = name;
}
MateriaSource::~MateriaSource(){

	for (int i = 0; i < count; ++i)
		delete learning[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource& name){
	if (this != &name)
	{
		 for (int i = 0; i < 4; ++i)
		{
			delete learning[i];
			learning[i] = NULL;
		}
		learning[0] = name.learning[0];
		learning[1] = name.learning[1];
		learning[2] = name.learning[2];
		learning[3] = name.learning[3];
	}
	return *this;
}


void MateriaSource::learnMateria(AMateria *name) 
{
	if (count < 4)
	{
		learning[count++] = name;
	}
}

AMateria* MateriaSource::createMateria(const std::string &name)
{
	for (int i = 0; i < count; ++i)
	{
		if (learning[i]->getType() == name)
		{
			return learning[i]->clone();
		}
	}
	return NULL;
}
