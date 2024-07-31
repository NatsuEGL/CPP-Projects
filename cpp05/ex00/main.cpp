/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 09:27:28 by akaabi            #+#    #+#             */
/*   Updated: 2024/07/21 08:20:05 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat john("hamid", 2);
        std::cout << john << std::endl;
        john.incrementGrade();
        std::cout << john << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Bureaucrat jane("natsu", 151);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Bureaucrat joe("gray", 1);
        joe.incrementGrade(); 
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Bureaucrat alice("lucian", 150);
        alice.decrementGrade(); 
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
 