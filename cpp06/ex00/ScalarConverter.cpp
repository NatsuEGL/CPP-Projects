/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 08:00:16 by akaabi            #+#    #+#             */
/*   Updated: 2024/08/09 09:51:27 by akaabi           ###   ########.fr       */
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

int checking_str(std::string literal)
{
	if ((!std::isdigit(literal[0]) && literal.length() == 1))
		return 1;
	int len = literal.length();
	int j = 0;
	int i = 0;
	if (literal[i] == '-' || literal[i] == '+')
		i++;
	while (i < len)
	{
		if (literal[i] == '.')
			j++;
			i++;
	}
	if (j == 1 && literal[len - 1] == 'f')
		return 2;
	i = 0;
	if (literal[i] == '-' || literal[i] == '+')
		i++;
	while (i < len)
	{
		if (!std::isdigit(literal[i]) && literal[i] != '.')
			return (0);
			i++;
	}
	if (j > 1)
		return (0);
	return 1;
}
	
double convertingstring(const std::string &s) {
    std::istringstream ss(s);
    double result;
    ss >> result;
	if (ss.fail())
		std::cout << "char : impossible" << std::endl;
    return result;
}

void ScalarConverter::convert( std::string literal) {
	if (literal == "nan" || literal == "nanf") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
		return ;
    }
	if (literal == "+inf" || literal == "+inff") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
		return ;
    }
	if (literal == "-inf" || literal == "-inff") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
		return ;
    }

	double str = 0;
	int len = literal.length();
	if (checking_str(literal) == 2)
		literal = literal.substr(0,len - 1);
	if (!checking_str(literal))
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : impossible" << std::endl;
		std::cout << "double : impossible" << std::endl;	
		return ;
	}
	if (!std::isdigit(literal[0]) && literal.length() == 1)
		str = static_cast<double>(literal[0]);
	else	
	  str= convertingstring(literal);
	//char
	if ((std::isprint(static_cast<int>(str)) && str == static_cast<long>(str)))
		std::cout << "char : '" << static_cast<char>(str)<<  "'" <<std::endl;
	else if (!std::isprint(static_cast<int>(str)))
		std::cout << "char : Non displayable" << std::endl;
	else 
		std::cout << "char : impossible" << std::endl;
	//int 
	if (static_cast<long>(str) > INT_MAX || static_cast<long>(str) < INT_MIN)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(str)<< std::endl;
	//float 
	if ( str > 0 && (str > FLT_MAX || str < FLT_MIN))
		std::cout  << "float : impossible"  <<std::endl;
	else if (str < 0 && (str < -FLT_MAX || str > -FLT_MIN))
		std::cout << "float : impossible" << std::endl;
	else  if (abs(str) - abs(static_cast<long long>(str)) == 0)
		std::cout << "float : " << static_cast<float>(str) << ".0f"<< std::endl;
	else	
		std::cout << "float : " << static_cast<float>(str) << "f"<< std::endl;
	//double 
	if (str == static_cast<long>(str))
		std::cout  << "double : " << str << ".0"<<std::endl;
	else	
		std::cout << "double : " << str << std::endl;
}