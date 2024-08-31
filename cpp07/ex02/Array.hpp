/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 07:51:17 by akaabi            #+#    #+#             */
/*   Updated: 2024/08/31 08:32:44 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP


#include <iostream>
#include <string>


template <typename T>

class Array{
    private:
    
    T               *array;
    unsigned int    size;
    public :
    
    Array();
    Array(unsigned int n);
    ~Array();
    Array(const Array& N);
    Array& operator=(const Array& N);
    T& operator[](unsigned int index);
    const T& operator[](unsigned int index) const;
    unsigned int _size() const;

};
#include "Array.tpp"

#endif