/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:25:14 by akaabi            #+#    #+#             */
/*   Updated: 2024/07/01 07:48:07 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade) {
    std::cout << "Bureaucrat param Constructor !!" << std::endl;
    validateGrade(grade);
}
Bureaucrat::Bureaucrat(): name("Default"), grade(){
    std::cout << "Bureaucrat Default Constructor !!" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& N)
{
    std::cout << "Bureaucrat Copy assignement operator !!" << std::endl;
    if (this != &N)
    {
        const_cast<std::string&> (this->name) = N.name;
        this->grade = N.grade;
        
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat Destructor !!" << std::endl;

}

const std::string& Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

void Bureaucrat::incrementGrade() {
    validateGrade(grade - 1);
    grade--;
}

void Bureaucrat::decrementGrade() {
    validateGrade(grade + 1);
    grade++;
}

void Bureaucrat::validateGrade(int grade) {
    if (grade < 1) {
        throw GradeTooHighException();
    } else if (grade > 150) {
        throw GradeTooLowException();
    }
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return out;
}

void Bureaucrat::signForm(Form& form) {
    try {
        form.beSigned(*this);
        std::cout << name << " signed " << form.getName() << std::endl;
    } catch (const std::exception& e) {
        std::cout << name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}