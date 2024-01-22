/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:23:17 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/13 22:24:19 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n){
    name = n;
    Weapn = NULL;
    // std::cout << "The Constructor for " << name << std::endl;
}

HumanB::~HumanB(){
    // std::cout << "The Destructor for " << name << std::endl;
}

void HumanB::attack(){
    if (Weapn)
        std::cout << name << " attacks with their " << Weapn->getType() << std::endl;
    else
        std::cout << name << " Can't attack " << std::endl;
}

void HumanB::setWeapon(Weapon &w) {
    Weapn = &w;
}