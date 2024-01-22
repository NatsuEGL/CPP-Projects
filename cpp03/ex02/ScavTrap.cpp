/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:31:52 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/19 10:55:38 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap Default Constructor" << std::endl;
    Name = "default";
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& name){
    std::cout << "ScavTrap copy Constructor" << std::endl;
    Name = name.Name;
    HitPoints = name.HitPoints;
    EnergyPoints = name.EnergyPoints;
    AttackDamage = name.AttackDamage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& N){
    std::cout << "ScavTrap copy assignement operator" << std::endl;
    if (this != &N)
    {   
    Name = N.Name;
    HitPoints = N.HitPoints;
    EnergyPoints = N.EnergyPoints;
    AttackDamage = N.AttackDamage;
    }
    return *this;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap  Destructor" << std::endl;
}

void ScavTrap::guardGate() {
        std::cout << "ScavTrap " << Name << " is now in Gatekeeper mode!" << std::endl;
}
