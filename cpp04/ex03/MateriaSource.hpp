/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:38:13 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/22 09:44:58 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
	AMateria *learning[4];
	int		count;
	public:
	MateriaSource();
	MateriaSource(const MateriaSource &name);
	MateriaSource& operator=(const MateriaSource &name);
	~MateriaSource();
	void learnMateria(AMateria* name);
	AMateria *createMateria(std::string const &name);
	
};

#endif