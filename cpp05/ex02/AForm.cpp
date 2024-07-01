/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:23:57 by akaabi            #+#    #+#             */
/*   Updated: 2024/07/01 08:35:39 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "AForm.hpp"

// // Constructor
// AForm::AForm(const std::string& name, int gradeSign, int gradeExecute)
//     : name(name), signedStatus(false), gradeSign(gradeSign), gradeExecute(gradeExecute) {
//     if (gradeSign < 1 || gradeExecute < 1)
//         throw GradeTooHighException();
//     if (gradeSign > 150 || gradeExecute > 150)
//         throw GradeTooLowException();
// }

// // Copy constructor
// AForm::AForm(const AForm& other)
//     : name(other.name), signedStatus(other.signedStatus), gradeSign(other.gradeSign), gradeExecute(other.gradeExecute) {}

// // Assignment operator
// AForm& AForm::operator=(const AForm& other) {
//     if (this != &other) {
//         signedStatus = other.signedStatus;
//     }
//     return *this;
// }

// // Destructor
// AForm::~AForm() {}

// // Getters
// const std::string& AForm::getName() const {
//     return name;
// }

// bool AForm::isSigned() const {
//     return signedStatus;
// }

// int AForm::getGradeSign() const {
//     return gradeSign;
// }

// int AForm::getGradeExecute() const {
//     return gradeExecute;
// }

// // beSigned method
// void AForm::beSigned(const Bureaucrat& bureaucrat) {
//     if (bureaucrat.getGrade() > gradeSign) {
//         throw GradeTooLowException();
//     }
//     signedStatus = true;
// }

// // Overloaded insertion operator
// std::ostream& operator<<(std::ostream& out, const AForm& form) {
//     out << "Form: " << form.getName() << ", signed: " << form.isSigned()
//         << ", grade required to sign: " << form.getGradeSign()
//         << ", grade required to execute: " << form.getGradeExecute();
//     return out;
// }


#include "AForm.hpp"

// Constructor
AForm::AForm(const std::string& name, int gradeSign, int gradeExecute, const std::string& target)
    : name(name), signedStatus(false), gradeSign(gradeSign), gradeExecute(gradeExecute), target(target) {
    if (gradeSign < 1 || gradeExecute < 1)
        throw GradeTooHighException();
    if (gradeSign > 150 || gradeExecute > 150)
        throw GradeTooLowException();
}

// Copy constructor
AForm::AForm(const AForm& other)
    : name(other.name), signedStatus(other.signedStatus), gradeSign(other.gradeSign), gradeExecute(other.gradeExecute), target(other.target) {}

// Assignment operator
AForm& AForm::operator=(const AForm& other) {
    if (this != &other) {
        signedStatus = other.signedStatus;
    }
    return *this;
}

// Destructor
AForm::~AForm() {}

// Getters
const std::string& AForm::getName() const {
    return name;
}

bool AForm::isSigned() const {
    return signedStatus;
}

int AForm::getGradeSign() const {
    return gradeSign;
}

int AForm::getGradeExecute() const {
    return gradeExecute;
}

const std::string& AForm::getTarget() const {
    return target;
}

// beSigned method
void AForm::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > gradeSign) {
        throw GradeTooLowException();
    }
    signedStatus = true;
}

// checkExecution method
void AForm::checkExecution(Bureaucrat const & executor) const {
    if (!isSigned()) {
        throw FormNotSignedException();
    }
    if (executor.getGrade() > gradeExecute) {
        throw GradeTooLowException();
    }
}

// Overloaded insertion operator
std::ostream& operator<<(std::ostream& out, const AForm& form) {
    out << "Form: " << form.getName() << ", signed: " << form.isSigned()
        << ", grade required to sign: " << form.getGradeSign()
        << ", grade required to execute: " << form.getGradeExecute()
        << ", target: " << form.getTarget();
    return out;
}
