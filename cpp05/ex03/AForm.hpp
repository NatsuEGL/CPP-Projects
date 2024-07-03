/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:23:27 by akaabi            #+#    #+#             */
/*   Updated: 2024/07/01 08:33:59 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef AFORM_HPP
// #define AFORM_HPP

// #include <iostream>
// #include <string>
// #include "Bureaucrat.hpp"


// class AForm : public Bureaucrat{
//     private:
//         const std::string name;
//         bool signedStatus;
//         const int gradeSign;
//         const int gradeExecute;
//     public:
//         AForm(const std::string& name, int gradeSign, int gradeExecute);
//         AForm(const AForm& other);
//         AForm& operator=(const AForm& other);
//         ~AForm();

//         const std::string& getName() const;
//         bool isSigned() const;
//         int getGradeSign() const;
//         int getGradeExecute() const;

//         void beSigned(const Bureaucrat& bureaucrat);

//         class GradeTooHighException : public std::exception {
//         public:
//             const char* what() const throw() {
//                 return "Grade too high!";
//             }
//         };

//         class GradeTooLowException : public std::exception {
//         public:
//             const char* what() const throw() {
//                 return "Grade too low!";
//             }
//         };

// };

// std::ostream& operator<<(std::ostream& out, const AForm& Aform);

// #endif


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
        const char* what() const throw() {
            return "Grade too high!";
        }
    };

    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw() {
            return "Grade too low!";
        }
    };

    class FormNotSignedException : public std::exception {
    public:
        const char* what() const throw() {
            return "Form not signed!";
        }
    };

protected:
    void checkExecution(Bureaucrat const & executor) const;

};

std::ostream& operator<<(std::ostream& out, const AForm& form);

#endif // AFORM_HPP
