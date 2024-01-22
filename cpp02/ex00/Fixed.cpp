/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:16:27 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/16 09:45:13 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    fixed_point = 0;
}

Fixed::Fixed(const Fixed& fixed){
    std::cout << "Copy constructor called" << std::endl;
    fixed_point = fixed.getRawBits();
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
    std::cout << "getRawBits member function called" << std::endl;
    return fixed_point;
}
void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    fixed_point = raw;
}
