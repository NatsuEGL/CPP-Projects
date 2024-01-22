/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:31:47 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/20 14:22:33 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){

    ScavTrap scavtrap;
    scavtrap.attack("Vault Hunter");
    scavtrap.takeDamage(20);
    scavtrap.guardGate(); 
    return (0);
}