/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:31:17 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/20 15:16:58 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout << "FragTrap Default Constructor" << std::endl;
    Name = "default";
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& name){
    std::cout << "FragTrap copy Constructor" << std::endl;
    Name = name.Name;
    HitPoints = name.HitPoints;
    EnergyPoints = name.EnergyPoints;
    AttackDamage = name.AttackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap& N){
    std::cout << "FragTrap copy assignement operator" << std::endl;
    if (this != &N)
    {   
        Name = N.Name;
        HitPoints = N.HitPoints;
        EnergyPoints = N.EnergyPoints;
        AttackDamage = N.AttackDamage;
    }
    return *this;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap  Destructor" << std::endl;
}

void FragTrap::highFivesGuys() {
    if (HitPoints)
        std::cout << "FragTrap " << Name << " requests a high five from everyone! Positive vibes!" << std::endl;
    else
        std::cout << "FragTrap " << Name << " Bro Can't raise his hand he's dead xD!!!" << std::endl;
        
}