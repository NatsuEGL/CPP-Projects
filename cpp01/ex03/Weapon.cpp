/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:23:23 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/14 15:31:02 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(std::string name){
    type  = name;
}

const  std::string& Weapon::getType(){
    return (type);
}


Weapon::Weapon(){
    type = "Default";
    // std::cout << "The Constructor for " << type << std::endl;
}
Weapon::Weapon(std::string name){
    type = name;
    // std::cout << "The Constructor for " << type << std::endl;
}
Weapon::~Weapon(){
    // std::cout << "The Destructor for " << type << std::endl;
}