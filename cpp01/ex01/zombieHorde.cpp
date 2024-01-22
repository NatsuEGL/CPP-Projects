/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:39:50 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/13 20:34:31 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    if (N <= 0)
    {
        std::cout << "U Can't Allocat Negative Number's Bruh" << std::endl;
        exit(1);
    }
    Zombie *NewZombieH = new Zombie[N];

    for (int i = 0; i < N; i++)
		  NewZombieH[i].sZ(name);

    return NewZombieH;
}