/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:25:23 by akaabi            #+#    #+#             */
/*   Updated: 2024/07/01 07:58:46 by akaabi           ###   ########.fr       */
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
            virtual const char* what() const throw() {
                return "Grade is too high!";
            }
        };

        class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw() {
                return "Grade is too low!";
            }
        };

        // Constructor and Destructor
        Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        void signForm(Form& form);
        ~Bureaucrat();

        // Getter methods
        const std::string& getName() const;
        int getGrade() const;

        // Other member functions
        void incrementGrade();
        void decrementGrade();
    Bureaucrat& operator=(const Bureaucrat& N);
     friend std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureaucrat);
};

#endif