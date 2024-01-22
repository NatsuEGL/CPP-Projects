/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:50:37 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/20 15:21:14 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main(){

    ClapTrap claptrap("Clap");

    claptrap.attack("Bandit");
    claptrap.takeDamage(9);
    claptrap.beRepaired(10);
    return (0);
}