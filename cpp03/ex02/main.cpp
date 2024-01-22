/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:31:47 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/20 15:24:45 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(){

    FragTrap fragtrap;
    fragtrap.attack("Enemy");
    fragtrap.takeDamage(10);
    fragtrap.beRepaired(5);
    fragtrap.highFivesGuys();
    return (0);
}