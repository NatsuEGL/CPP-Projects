/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 08:38:50 by akaabi            #+#    #+#             */
/*   Updated: 2024/07/28 11:10:10 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm("RobotomyRequestForm", 72, 45, target) {}


RobotomyRequestForm::RobotomyRequestForm()
    : AForm() {}
    
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other){*this = other;}


RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    if (this != &other) {
        this->target = other.target;
    }
    return *this;
}


RobotomyRequestForm::~RobotomyRequestForm() {}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    checkExecution(executor);
    std::cout << "Drilling noises..." << std::endl;
    if (std::rand() % 2) {
        std::cout << getTarget() << " has been robotomized successfully!" << std::endl;
    } else {
        std::cout << "Robotomy of " << getTarget() << " failed!" << std::endl;
    }
}
