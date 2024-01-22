/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:36:54 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/22 12:13:55 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		int j;
		AMateria *save_list[100];
		std::string name;
		AMateria *my_inv[4];
	public:
		Character();
		Character(std::string const t);
		Character(const Character& name);
		Character& operator=(const Character& name);
		virtual ~Character();
		std::string const &getName() const; 
		void equip(AMateria *name);
		void unequip(int index);
		void use(int index, ICharacter &name);
};

#endif