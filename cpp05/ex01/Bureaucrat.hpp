/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:25:23 by akaabi            #+#    #+#             */
/*   Updated: 2024/07/28 08:54:59 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <stdexcept>
#include <iostream>

class Form;

class Bureaucrat {
    private:
        const std::string name;
        int   grade;
        void validateGrade(int grade);
    public:
        // Exception classes
         class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw();
        };

        Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat& other);
        void signForm(Form& form);
        ~Bureaucrat();

       
        const std::string& getName() const;
        int getGrade() const;

        
        void incrementGrade();
        void decrementGrade();
    Bureaucrat& operator=(const Bureaucrat& N);
};
std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif