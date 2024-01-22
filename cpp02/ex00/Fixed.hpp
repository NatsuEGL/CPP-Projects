/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:16:25 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/16 09:46:53 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>


class Fixed
{
    private:
        int fixed_point;
        static const int fractorial_point = 8;
    public:
    Fixed();
    Fixed(const Fixed& fixed);
    ~Fixed();
    Fixed& operator=(const Fixed& fixed);
    int getRawBits() const;
    void setRawBits(int const raw);
};

#endif