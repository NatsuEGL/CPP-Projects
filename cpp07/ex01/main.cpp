/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:27:49 by akaabi            #+#    #+#             */
/*   Updated: 2024/08/31 07:49:09 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// integer
void printInt(int x) {
    std::cout << x << " ";
}

// string
void printString(const std::string& str) {
    std::cout << str << " ";
}

int main() {
    // Test with an array of integers
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);
    
    std::cout << "Integer array: ";
    ::iter(intArray, intArrayLength, printInt);
    std::cout << std::endl;


    std::string t[] = {"hello", "amine", "Natsu" , "salam"};
    int arraysize = sizeof(t) / sizeof(t[0]);

    std::cout << "String array: ";
    ::iter(t, arraysize, printString);
    std::cout << std::endl;
    
    return 0;
}
