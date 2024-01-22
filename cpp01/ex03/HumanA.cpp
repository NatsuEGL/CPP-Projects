/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:22:54 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/13 20:06:48 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string n, Weapon &a): name(n), Weapn(a){}

HumanA::~HumanA(){
    // std::cout << "The Destructor for " << name << std::endl;
}

void HumanA::attack(){
    std::cout << name << " attacks with their " << Weapn.getType() << std::endl;
}