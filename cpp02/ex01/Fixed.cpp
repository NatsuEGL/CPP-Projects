/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:28:48 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/17 16:51:45 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    fixed_point = 0;
}
Fixed::Fixed(const int fixed): fixed_point(fixed << 8) {
	std::cout << "Int constructor called " << std::endl;
};

Fixed::Fixed(const float fixed): fixed_point((int)roundf(fixed * (1 << 8))) {
	std::cout << "Float constructor called " << std::endl;
};

Fixed::Fixed(const Fixed& fixed){
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed(){
   std::cout << "The Destroctor called " << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		fixed_point = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits() const{
    // std::cout << "getRawBits member function called" << std::endl;
    return fixed_point;
}
void Fixed::setRawBits(int const raw){
    // std::cout << "setRawBits member function called" << std::endl;
    fixed_point = raw;
}


float Fixed::toFloat() const{
	return ((float)fixed_point / (1 << 8));
}

int Fixed::toInt() const{
	return (fixed_point >> 8);
}

std::ostream& operator<<(std::ostream& out, const Fixed& f){
	out << f.toFloat();
	return (out);
}