/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:49:57 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/22 14:44:13 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor." << std::endl;
}

Brain:: Brain(const Brain &name)
{
	int i = 0;
	std::cout << "Brain copy Constructor" << std::endl;
	while (i < 100)
	{
		this->ideas[i] = name.ideas[i];
		i++;
	}
	
}

Brain &Brain:: operator=(const Brain &name)
{
	int i = 0;
	std::cout << "Brain Copy Assignment Operator" << std::endl;
	while (i < 100)
	{
		this->ideas[i] = name.ideas[i];
		i++;	
	}
	return *this;
}

Brain:: ~Brain()
{
	std::cout << " Brain Destructor" << std::endl;
}