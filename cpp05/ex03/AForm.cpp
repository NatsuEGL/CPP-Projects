 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:23:57 by akaabi            #+#    #+#             */
/*   Updated: 2024/07/18 07:52:54 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


AForm::AForm(const std::string& name, int gradeSign, int gradeExecute, const std::string& target)
    : name(name), signedStatus(false), gradeSign(gradeSign), gradeExecute(gradeExecute), target(target) {
    if (gradeSign < 1 || gradeExecute < 1)
        throw GradeTooHighException();
    if (gradeSign > 150 || gradeExecute > 150)
        throw GradeTooLowException();
}

AForm::AForm() : name("Default") , signedStatus(false) , gradeSign(150) , gradeExecute(150) {};


AForm::AForm(const AForm& other)
    : name(other.name), signedStatus(false), gradeSign(other.gradeSign), gradeExecute(other.gradeExecute) {}


AForm& AForm::operator=(const AForm& other) {
    if (this != &other) {
        const_cast<std::string&>(this->name) = other.name;
        const_cast<int&>(this->gradeSign) = other.gradeSign;
        const_cast<int&>(this->gradeExecute) = other.gradeExecute;
        this->signedStatus = other.signedStatus;
    }
    return *this;
}


AForm::~AForm() {}


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


void AForm::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > gradeSign) {
        throw GradeTooLowException();
    }
    signedStatus = true;
}


void AForm::checkExecution(Bureaucrat const & executor) const {
    if (!isSigned()) {
        throw FormNotSignedException();
    }
    if (executor.getGrade() > gradeExecute) {
        throw GradeTooLowException();
    }
}

const char* AForm::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

const char* AForm::FormNotSignedException::what() const throw() {
            return "Form not signed!";
}

std::ostream& operator<<(std::ostream& out, const AForm& form) {
    out << "Form: " << form.getName() << ", signed: " << form.isSigned()
        << ", grade required to sign: " << form.getGradeSign()
        << ", grade required to execute: " << form.getGradeExecute()
        << ", target: " << form.getTarget();
    return out;
}
