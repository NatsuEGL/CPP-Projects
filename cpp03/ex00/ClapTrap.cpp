/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:50:32 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/20 15:22:41 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): Name("Default") , HitPoints(10), EnergyPoints(10), AttackDamage(0){
    std::cout << "Default Constructor !!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& N): Name(N) , HitPoints(10), EnergyPoints(10), AttackDamage(0){
    std::cout << "Parameterized Constructor !!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& N){
    std::cout << "Copy Constructor !!" << std::endl;
    Name = N.Name;
    HitPoints = N.HitPoints;
    EnergyPoints = N.EnergyPoints;
    AttackDamage = N.AttackDamage;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& N)
{
    std::cout << "Copy assignement operator !!" << std::endl;
    if (this != &N)
    {
        Name = N.Name;
        HitPoints = N.HitPoints;
        EnergyPoints = N.EnergyPoints;
        AttackDamage = N.AttackDamage;   
    }
    return *this;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap Destructor " << std::endl;
}
//----------------------------------------------------------
void ClapTrap::attack(const std::string& target) {
    if (HitPoints > 0 && EnergyPoints > 0) {
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing "
                  << AttackDamage << " points of damage!" << std::endl;
        EnergyPoints--;
    }
    else
        std::cout << "ClapTrap " << Name << " can't attack. Not enough hit points or energy." << std::endl;
}
//-----------------------------------------------------------
void ClapTrap::takeDamage(unsigned int amount){
	if (HitPoints == 0)
	{
		std::cout << "ClapTrap " << Name << " is already dead " << std::endl;
		HitPoints = 0;
	}
	else if (amount >= HitPoints)
	{
		std::cout << "ClapTrap " << Name << " have no Hitpoints he's dead " << std::endl;
		HitPoints = 0;
	}
	else
	{
		std::cout << "ClapTrap " << Name << " took " <<  amount << " damage " << std::endl;
		HitPoints -= amount;
	}
}
//-----------------------------------------------------------

void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount > 10)
    {
        std::cout << "U Can't Repair more then 10 Hit points!" << std::endl;
        return ;
    }
    if (HitPoints > 0 && EnergyPoints > 0)
    {
        std::cout << "ClapTrap " << Name << " is being repaired, gaining " << amount << " hit points!" << std::endl;
        HitPoints += amount;
        if (HitPoints > 10)
            HitPoints = 10;
        EnergyPoints--;
    }
    else
    {
        std::cout << "ClapTrap " << Name << " can't be repaired. No hit points left." << std::endl;
    }
}
//-----------------------------------------------------------