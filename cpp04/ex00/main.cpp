/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:24:48 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/22 14:51:33 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(){
  		{
		const Animal *A = new Animal();
		std::cout << "-----------------" << std::endl;
		const Animal *D = new Dog();
		std::cout << "-----------------" << std::endl;
		const Animal *C = new Cat();
		std::cout << "-----------------" << std::endl;
		std::cout << "---------- + + + + +  ----------" << std::endl;
		std::cout << D->getType() << std::endl;
		std::cout << C->getType() << std::endl;
		std::cout << A->getType() << std::endl;
		std::cout << "---------- + + + + +  ----------" << std::endl;
		C->makeSound();
		D->makeSound();
		A->makeSound();
		std::cout << std::endl;
		delete A;
		delete D;
		delete C;
		std::cout << std::endl;
	}
		std::cout << "\x1b[31m==============   WrongAnimal Case   ============\033[0m\n" << std::endl;
	{
		const WrongAnimal* A = new WrongAnimal();
		std::cout << "\x1b[33m--------------------------------------\x1b[0m" << std::endl;
		const WrongAnimal* cat = new WrongCat();
		std::cout << "\x1b[33m------------- + + + + +  -------------\x1b[0m" << std::endl;
		std::cout << A->getType() << std::endl;
		std::cout << cat->getType() << std::endl;
		std::cout << "\x1b[33m------------- + + + + +  -------------\x1b[0m" << std::endl;
		cat->makeSound();
		A->makeSound();
		std::cout << "\x1b[33m----------------------------------\x1b[0m" << std::endl;
		std::cout << std::endl;
		delete A;
		delete cat;
	}

	return 0;
}