/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:23:57 by akaabi            #+#    #+#             */
/*   Updated: 2024/07/01 07:49:05 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// Constructor
Form::Form(const std::string& name, int gradeSign, int gradeExecute)
    : name(name), signedStatus(false), gradeSign(gradeSign), gradeExecute(gradeExecute) {
    if (gradeSign < 1 || gradeExecute < 1)
        throw GradeTooHighException();
    if (gradeSign > 150 || gradeExecute > 150)
        throw GradeTooLowException();
}

// Copy constructor
Form::Form(const Form& other)
    : name(other.name), signedStatus(other.signedStatus), gradeSign(other.gradeSign), gradeExecute(other.gradeExecute) {}

// Assignment operator
Form& Form::operator=(const Form& other) {
    if (this != &other) {
        signedStatus = other.signedStatus;
    }
    return *this;
}

// Destructor
Form::~Form() {}

// Getters
const std::string& Form::getName() const {
    return name;
}

bool Form::isSigned() const {
    return signedStatus;
}

int Form::getGradeSign() const {
    return gradeSign;
}

int Form::getGradeExecute() const {
    return gradeExecute;
}

// beSigned method
void Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > gradeSign) {
        throw GradeTooLowException();
    }
    signedStatus = true;
}

// Overloaded insertion operator
std::ostream& operator<<(std::ostream& out, const Form& form) {
    out << "Form: " << form.getName() << ", signed: " << form.isSigned()
        << ", grade required to sign: " << form.getGradeSign()
        << ", grade required to execute: " << form.getGradeExecute();
    return out;
}
