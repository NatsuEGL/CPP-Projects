/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:36:45 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/22 12:13:17 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("Default"){
	j = 0;
	for ( int i = 0; i < 4; i++)
		my_inv[i] = NULL;
	for ( int i = 0; i < 4; i++)
		save_list[i] = NULL;
};
Character::Character(std::string const t) : name(t){
	j = 0;
	for ( int i = 0; i < 4; i++)
		my_inv[i] = NULL;
	for ( int i = 0; i < 4; i++)
		save_list[i] = NULL;
};
Character::~Character(){
	
	for ( int i = 0; i < 100; i++)
		delete save_list[i];
	for (int i = 0; i < 4; ++i)
		delete my_inv[i];
}
Character::Character(const Character& name){
	*this = name;
}
Character& Character::operator=(const Character& n){
	if (this != &n)
	{
		 for (int i = 0; i < 4; ++i)
		{
			delete my_inv[i];
			my_inv[i] = NULL;
		}
		name = n.name;
		my_inv[0] = n.my_inv[0];
		my_inv[1] = n.my_inv[1];
		my_inv[2] = n.my_inv[2];
		my_inv[3] = n.my_inv[3];
		for ( int i = 0; i < 4; i++)
			save_list[i] = NULL;
		j = 0;
}
	return *this;
}
		
std::string const& Character::getName() const {return name;}

void Character::equip(AMateria *name)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!my_inv[i])
		{
			my_inv[i] = name;
			return;
		}
	}
	delete name;
}
void Character::unequip(int index)
{
	if (index >= 0 && index < 4 && my_inv[index])
	{
		save_list[j] = my_inv[index];
		j++;
		my_inv[index] = NULL;
	}
}
void Character::use(int index, ICharacter &name)
{
	if (index >= 0 && index < 4 && my_inv[index])
	{
		my_inv[index]->use(name);
	}   
}
