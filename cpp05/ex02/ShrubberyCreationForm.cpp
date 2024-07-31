/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 08:37:33 by akaabi            #+#    #+#             */
/*   Updated: 2024/07/28 12:12:05 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("ShrubberyCreationForm", 145, 137, target) {
        // std::cout << "constructor is here for shr" << std::endl;

    }


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other){*this = other;}


ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this != &other) {
       this->target = other.target;
    }
    return *this;
}


ShrubberyCreationForm::~ShrubberyCreationForm() {}


void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    checkExecution(executor);
    std::ofstream outfile(getTarget() + "_shrubbery");
    outfile << "     ccee88oo\n  C8O8O8Q8PoOb o8oo\n dOB69QO8PdUOpugoO9bD\nCgggbU8OU qOp qOdoUOdcb\n  6OuU  /p u gcoUodpP\n       \\ //  /douUP\n       \\////\n       |||/\\ \n         |||/\n         |||||\n .....//|||| ...." << std::endl;
    outfile.close();
}
