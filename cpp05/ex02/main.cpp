/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:25:44 by akaabi            #+#    #+#             */
/*   Updated: 2024/07/28 12:16:47 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Bureaucrat john("John", 1);
        ShrubberyCreationForm shrubbery("slay");
        RobotomyRequestForm robotomy("target");
        PresidentialPardonForm pardon("target");

        john.signForm(shrubbery);
        john.executeForm(shrubbery);

        john.signForm(robotomy);
        john.executeForm(robotomy);

        john.signForm(pardon);
        john.executeForm(pardon);
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}