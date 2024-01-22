/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:24:48 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/22 15:17:37 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(){
		std::cout << "\x1b[35m==============   Brain Case  ============\033[0m\n" << std::endl;
	{
		const Animal *brain[6];
		int i = 0;
		while (i < 6)
		{
			if (i < 3)
			{
				std::cout << "\x1b[36m===============\033[0m" << "\x1b[33m CAT \x1b[0m" << i << " \x1b[36m=============\033[0m\n" << std::endl;
				brain[i] =  new Cat();
				std::cout << std::endl;
				brain[i]->makeSound();
				std::cout << std::endl;
				delete brain[i];
			}
			else
			{
				std::cout << "\x1b[36m===============\033[0m" << "\x1b[33m DOG \x1b[0m" << i << " \x1b[36m=============\033[0m\n" << std::endl;
				brain[i] = new Dog();
				std::cout << std::endl;
				brain[i]->makeSound();
				std::cout << std::endl;
				delete brain[i];
			}
			i++;
		}
		std::cout << "\x1b[35m========================================\x1b[0m" << std::endl;
	return 0;
}
}