/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 08:00:13 by akaabi            #+#    #+#             */
/*   Updated: 2024/08/09 08:41:47 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cfloat>
#include <sstream>

class ScalarConverter {
private:
    ScalarConverter();
public:
    ScalarConverter(const ScalarConverter&);
    ~ScalarConverter();
    ScalarConverter& operator=(const ScalarConverter &);
    // static void convert(const std::string& literal);
    static void convert( std::string literal);
//     static void char_check(const std::string& literal);
//     static void int_check(const std::string& literal);
//     static void float_check(const std::string& literal);
//    static void double_check(const std::string& literal);
};

#endif