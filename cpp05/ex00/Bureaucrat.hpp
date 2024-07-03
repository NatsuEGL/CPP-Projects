/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 09:27:21 by akaabi            #+#    #+#             */
/*   Updated: 2024/05/23 10:58:14 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <stdexcept>
#include <iostream>

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
        ~Bureaucrat();

        // Getter methods
        const std::string& getName() const;
        int getGrade() const;

        // Other member functions
        void incrementGrade();
        void decrementGrade();
    Bureaucrat& operator=(const Bureaucrat& N);
};
std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif
