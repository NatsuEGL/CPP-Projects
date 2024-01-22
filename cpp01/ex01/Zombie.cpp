/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:39:46 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/13 20:30:47 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    name = "Default";
    //  std::cout << " The Constructor for mr." << name << std::endl;
}
Zombie::~Zombie(){
    std::cout << " The Destructor for mr." << name << std::endl;
}

// Zombie::Zombie(std::string n){
//     name = n;
//     std::cout << " The Constructor for mr." << name << std::endl;
// }

void Zombie::announce(){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::sZ(std::string s) {
	name = s;
}