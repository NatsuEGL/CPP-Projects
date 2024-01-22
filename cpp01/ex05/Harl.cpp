/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:38:48 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/13 19:55:28 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug() {
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info() {
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning() {
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){
    void	(Harl::*func)(void);
    int i ;
    std::string tab[] = {"DEBUG", "WARNING", "INFO", "ERROR"};

    for (i = 0; i < 4 ; i++)
    {
        if(tab[i] == level)
            break ;
    }
    switch (i)
    {
    case 0:
        func = &Harl::debug;
        break;
    case 1:
        func = &Harl::warning;
        break;
    case 2:
        func = &Harl::info;
        break;
    case 3:
        func = &Harl::error;
        break;
    default:
        std::cout << "annonymous message " << level << std::endl;
        func = NULL;
        break;
    }
    if (func)
		(this->*func)();
}