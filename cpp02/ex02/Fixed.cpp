/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:28:19 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/17 15:34:30 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed() : fixed_point(0) {
	// std::cout << "Default constructor called " << std::endl;
};

Fixed::Fixed(const int fixedpoint): fixed_point(fixedpoint << 8) {
	// std::cout << "Int constructor called " << std::endl;
};

Fixed::Fixed(const float fixedpoint): fixed_point((int)roundf(fixedpoint * (1 << 8))) {
	// std::cout << "Float constructor called " << std::endl;
};

Fixed::Fixed(const Fixed& fixed){
	// std::cout << "Copy constructor called " << std::endl;
	*this = fixed;
};
Fixed::~Fixed(){
	// std::cout << "Destructor called " << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed) {
	// std::cout << "Copy assignment operator called " << std::endl;
	if (this != &fixed)
		fixed_point = fixed.getRawBits();
		return *this;
}
int Fixed::getRawBits() const{
	// std::cout << "getRawBits member function called " << std::endl;
	return fixed_point;}

void Fixed::setRawBits(int const raw){
	// std::cout << "setRawBits member function called " << std::endl;
	fixed_point = raw;
}

float Fixed::toFloat() const{
	return ((float)fixed_point / (1 << 8));
}

int Fixed::toInt() const{
	return (fixed_point >> 8);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed){
	out << fixed.toFloat();
	return (out);
}
bool Fixed::operator<(const Fixed& fixed){
	if (this->fixed_point < fixed.fixed_point)
		return 1;
	else
		return 0;
}
bool Fixed::operator>(const Fixed& fixed) {
	if (this->fixed_point > fixed.fixed_point)
		return 1;
	else
		return 0;	
}
bool Fixed::operator<=(const Fixed& fixed) {
	if (this->fixed_point <= fixed.fixed_point)
		return 1;
	else
		return 0;
}
bool Fixed::operator>=(const Fixed& fixed) {
	if (this->fixed_point >= fixed.fixed_point)
		return 1;
	else
		return 0;	
}
bool Fixed::operator==(const Fixed& fixed) {
	if (this->fixed_point == fixed.fixed_point)
		return 1;
	else
		return 0;	
}
bool Fixed::operator!=(const Fixed& fixed) {
	if (this->fixed_point != fixed.fixed_point)
		return 1;
	else
		return 0;	
}

Fixed Fixed::operator+(const Fixed& fixed){
	Fixed result(this->toFloat() + fixed.toFloat());
	return (result);
}
Fixed Fixed::operator-(const Fixed& fixed) {
	Fixed result(this->toFloat() - fixed.toFloat());
	return (result);	
}
Fixed Fixed::operator*(const Fixed& fixed){
	Fixed result(this->toFloat() * fixed.toFloat());
	return (result);	
	
}
Fixed Fixed::operator/(const Fixed& fixed){
	Fixed result(this->toFloat() / fixed.toFloat());
	return (result);	
}

Fixed& Fixed::operator++(){
	this->fixed_point++;
	return *this;
}
Fixed& Fixed::operator--(){
	this->fixed_point--;
	return *this;
}
Fixed  Fixed::operator++(int){
	Fixed tmp(*this);
	this->fixed_point++;
	return tmp;
}
Fixed  Fixed::operator--(int){
	Fixed tmp(*this);
	this->fixed_point--;
	return tmp;
}

Fixed& Fixed::min(Fixed& i,Fixed& j){
	if (i > j)
		return j;
	else
		return i;
}
Fixed& Fixed::max(Fixed& i,Fixed& j){
	if (i > j)
		return i;
	else
		return j;
}
const Fixed& Fixed::min(const Fixed& i,const Fixed& j){
	if ((Fixed)i > (Fixed)j)
		return j;
	else
		return i;	
}
const Fixed& Fixed::max(const Fixed& i,const Fixed& j){
	if ((Fixed)i > (Fixed)j)
		return i;
	else
		return j;
}