/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:28:16 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/16 10:23:26 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>


class Fixed
{
	private:
		int fixed_point;
		static const int fractionalBits = 8;
	public :
	Fixed();
	Fixed(const int fixedpoint);
	Fixed(const float fixedpoint);
	Fixed(const Fixed& fixed);
	Fixed& operator=(const Fixed& fixed);
	~Fixed();
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
	bool operator<(const Fixed& fixed);
	bool operator>(const Fixed& fixed) ;
	bool operator<=(const Fixed& fixed) ;
	bool operator>=(const Fixed& fixed) ;
	bool operator==(const Fixed& fixed) ;
	bool operator!=(const Fixed& fixed) ;
	Fixed operator+(const Fixed& fixed);
	Fixed operator-(const Fixed& fixed);
	Fixed operator*(const Fixed& fixed);
	Fixed operator/(const Fixed& fixed);
	Fixed& operator++();
	Fixed& operator--();
	Fixed operator++(int);
	Fixed operator--(int);
	static Fixed& min(Fixed& i,Fixed& j);
	static const Fixed& min(const Fixed& i,const Fixed& j);
	static Fixed& max(Fixed& i,Fixed& j);
	static const Fixed& max(const Fixed& i,const Fixed& j);

};

std::ostream& operator<<(std::ostream& out, const Fixed& f);

#endif