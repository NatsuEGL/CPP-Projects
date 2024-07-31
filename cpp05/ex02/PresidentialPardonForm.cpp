/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 08:39:17 by akaabi            #+#    #+#             */
/*   Updated: 2024/07/28 12:11:54 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
    : AForm("PresidentialPardonForm", 25, 5, target) {
        // std::cout << "constructor is here for pre" << std::endl;
    }
PresidentialPardonForm::PresidentialPardonForm() : AForm() {};


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other){*this = other;}


PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    if (this != &other) {
      this->target = other.target;
    }
    return *this;
}


PresidentialPardonForm::~PresidentialPardonForm() {}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    checkExecution(executor);
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
