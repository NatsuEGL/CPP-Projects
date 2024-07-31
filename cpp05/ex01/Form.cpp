/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:23:57 by akaabi            #+#    #+#             */
/*   Updated: 2024/07/31 07:59:26 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form(const std::string& name, int gradeSign, int gradeExecute)
    : name(name), signedStatus(false), gradeSign(gradeSign), gradeExecute(gradeExecute) {
        // std::cout << "constructor is here for form" << std::endl;
    if (gradeSign < 1 || gradeExecute < 1)
        throw GradeTooHighException();
    if (gradeSign > 150 || gradeExecute > 150)
        throw GradeTooLowException();
}


Form::Form(const Form& other)
    : name(other.name), signedStatus(false), gradeSign(other.gradeSign), gradeExecute(other.gradeExecute) {
        if (other.gradeSign < 1 || other.gradeExecute < 1)
		throw GradeTooHighException();
	else if (other.gradeSign > 150 || other.gradeExecute > 150)
		throw GradeTooLowException();
	else
		*this = other;
    }


Form& Form::operator=(const Form& other) {
    if (this != &other) {
        const_cast<std::string&>(this->name) = other.name;
        const_cast<int&>(this->gradeSign) = other.gradeSign;
        const_cast<int&>(this->gradeExecute) = other.gradeExecute;
        this->signedStatus = other.signedStatus;
    }
    return *this;
}


Form::~Form() {}


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


void Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > gradeSign) {
        throw GradeTooLowException();
    }
    signedStatus = true;
}


const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}
std::ostream& operator<<(std::ostream& out, const Form& form) {
    out << "Form: " << form.getName() << ", signed: " << form.isSigned()
        << ", grade required to sign: " << form.getGradeSign()
        << ", grade required to execute: " << form.getGradeExecute();
    return out;
}
