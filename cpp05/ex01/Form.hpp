/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:23:27 by akaabi            #+#    #+#             */
/*   Updated: 2024/07/27 16:13:09 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FROM_HPP
#define FROM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form : public Bureaucrat{
    private:
        const std::string name;
        bool signedStatus;
        const int gradeSign;
        const int gradeExecute;
    public:
        Form(const std::string& name, int gradeSign, int gradeExecute);
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form();

        const std::string& getName() const;
        bool isSigned() const;
        int getGradeSign() const;
        int getGradeExecute() const;

        void beSigned(const Bureaucrat& bureaucrat);

        class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw();
        };

};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif
