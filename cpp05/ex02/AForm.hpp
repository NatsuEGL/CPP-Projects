/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:23:27 by akaabi            #+#    #+#             */
/*   Updated: 2024/07/28 12:02:59 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
private:
    const std::string name;
    bool signedStatus;
    const int gradeSign;
    const int gradeExecute;
    const std::string target;
public:
    AForm(const std::string& name, int gradeSign, int gradeExecute, const std::string& target);
    AForm(const AForm& other);
    AForm();
    AForm& operator=(const AForm& other);
    virtual ~AForm();

    const std::string& getName() const;
    bool isSigned() const;
    int getGradeSign() const;
    int getGradeExecute() const;
    const std::string& getTarget() const;

    void beSigned(const Bureaucrat& bureaucrat);
    virtual void execute(Bureaucrat const & executor) const = 0;

     class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw();
        };

    class FormNotSignedException : public std::exception {
    public:
        const char* what() const throw();
    };

    void checkExecution(Bureaucrat const & executor) const;

};

std::ostream& operator<<(std::ostream& out, const AForm& form);

#endif
