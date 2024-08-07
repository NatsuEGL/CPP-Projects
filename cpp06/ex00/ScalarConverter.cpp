/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 08:00:16 by akaabi            #+#    #+#             */
/*   Updated: 2024/08/05 08:56:10 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter(){};
ScalarConverter::ScalarConverter(const ScalarConverter& N){ *this = N;};

ScalarConverter& ScalarConverter::operator=(const ScalarConverter&)
{
    // std::cout << "copy assignement operator" << std::endl;
    return *this;
}

ScalarConverter::~ScalarConverter(){};

void ScalarConverter::char_check(const std::string& literal)
{
     if (literal.length() == 1 && !isdigit(literal[0]))
     {
        char a = literal[0];
        std::cout << "char: '" << a << "'" << std::endl;
     }
}
void ScalarConverter::int_check(const std::string& literal){
        long j;
    if (literal.length() == 1)
    {
        j = static_cast<int>(literal[0]);
        std::cout << "int: ";
           std::cout  << j << std::endl;
    }
    else 
    {std::stringstream ss;
        ss.str(literal);
        ss >>  j;
        std::cout << "char: ";
        if (j > INT_MAX || j < INT_MIN)
            std::cout << "impossible" << std::endl;
        else if (isprint(j))
            std::cout << "'" << static_cast<char>(j) << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
        std::cout << "int: ";
         if (j > INT_MAX || j < INT_MIN)
            std::cout << "impossible" << std::endl;
        else
           std::cout  << j << std::endl;
    }     
}

void ScalarConverter::float_check(const std::string& literal)
{
     std::stringstream ss;
        double j;
    if (literal.length() == 1)
    {
        j = static_cast<int>(literal[0]);
        std::cout << "float: ";
           std::cout  << j << ".0f"<< std::endl;
    }
    else
    {
        // std::cout <<"salam";
        ss.str(literal);
        ss >> j;
        // std::cout << "char: ";
        // if (j > FLT_MAX || j < FLT_MIN)
        //     std::cout << "impossible" << std::endl;
        // else if (isprint(static_cast<int>(j)))
        //     std::cout << "'" << static_cast<char>(j) << "'" << std::endl;
        // else
        //     std::cout << "Non displayable" << std::endl;
        // std::cout << "int: " << static_cast<int>(j) << std::endl;
        std::cout << "float: ";
        if (j > FLT_MAX || j < FLT_MIN)
            std::cout << "impossible" << std::endl;
        else if (j == static_cast<int>(j))
          std::cout  << j << ".0f"<< std::endl;
        else 
          std::cout  << static_cast<float>(j) << std::endl;
        
    }
}
void ScalarConverter::double_check(const std::string& literal)
{
    double d;
     if (literal.length() == 1)
    {
        d = static_cast<int>(literal[0]);
        std::cout << "double: ";
           std::cout  << d << ".0"<< std::endl;
    }
    else
    {
    d = std::stod(literal);
        // std::cout << "char: ";
        // if (isprint(static_cast<int>(d)))
        //     std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
        // else
        //     std::cout << "Non displayable" << std::endl;
        // std::cout << "int: " << static_cast<int>(d) << std::endl;
        // std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
         if (d == static_cast<int>(d))
            std::cout << "double: " << d << ".0"<<std::endl;
        else
            std::cout << "double: " << d << std::endl;
        
    }
}
void ScalarConverter::convert(const std::string& literal) {
    
    if (literal == "+inff" || literal == "+inf") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
        return;
    } else if (literal == "-inff" || literal == "-inf") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
        return;
    } else if (literal == "nanf" || literal == "nan") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return;
    }
    // try {
    //     // Convert to char
    //     if (literal.length() == 1 && !isdigit(literal[0])) {
    //         char c = literal[0];
    //         std::cout << "char: '" << c << "'" << std::endl;
    //         std::cout << "int: " << static_cast<int>(c) << std::endl;
    //         std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    //         std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
    //         // return;
    //     }
    char_check(literal);
    int_check(literal);
    float_check(literal);
    double_check(literal);
        // Convert to int
        // std::stringstream ss;
        // ss.str(literal);
        // long j;
        // ss >>  j;
        // std::cout << "char: ";
        // if (j > INT_MAX || j < INT_MIN)
        //     std::cout << "impossible" << std::endl;
        // else if (isprint(j))
        //     std::cout << "'" << static_cast<char>(j) << "'" << std::endl;
        // else
        //     std::cout << "Non displayable" << std::endl;
        // std::cout << "int: ";
        //  if (j > INT_MAX || j < INT_MIN)
        //     std::cout << "impossible" << std::endl;
        // else 
        //     std::cout  << j << std::endl;
        // std::cout << "float: " << static_cast<float>(j) << ".0f" << std::endl;
        // std::cout << "double: " << static_cast<double>(j) << ".0" << std::endl;
        // return;
    // } catch (std::invalid_argument& e) {}

    // try {
    //     // Convert to float
    //     std::stringstream ss;
    //     // std::cout <<"salam";
    //     ss.str(literal);
    //     double j;
    //     ss >> j;
    //     // std::cout << "char: ";
    //     // if (j > FLT_MAX || j < FLT_MIN)
    //     //     std::cout << "impossible" << std::endl;
    //     // else if (isprint(static_cast<int>(j)))
    //     //     std::cout << "'" << static_cast<char>(j) << "'" << std::endl;
    //     // else
    //     //     std::cout << "Non displayable" << std::endl;
    //     // std::cout << "int: " << static_cast<int>(j) << std::endl;
    //     std::cout << "float: ";
    //     if (j > FLT_MAX || j < FLT_MIN)
    //         std::cout << "impossible" << std::endl;
    //     else 
    //       std::cout  << j << std::endl;
    //     // std::cout << "double: " << static_cast<double>(j) << std::endl;
    //     // return;
    // } catch (std::invalid_argument& e) {}

    // try {
    //     // Convert to double
    //     double d = std::stod(literal);
    //     // std::cout << "char: ";
    //     // if (isprint(static_cast<int>(d)))
    //     //     std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
    //     // else
    //     //     std::cout << "Non displayable" << std::endl;
    //     // std::cout << "int: " << static_cast<int>(d) << std::endl;
    //     // std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
    //     std::cout << "double: " << d << std::endl;
    //     // return;
    // } catch (std::invalid_argument& e) {}

    // Handle special cases: +inff, -inff, nanf, +inf, -inf, nan
}
