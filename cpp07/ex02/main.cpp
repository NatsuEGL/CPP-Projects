/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 08:39:26 by akaabi            #+#    #+#             */
/*   Updated: 2024/08/31 08:39:27 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
    try {
        // Test default constructor
        Array<int> emptyArray;
        std::cout << "Empty array size: " << emptyArray._size() << std::endl;

        // Test parameterized constructor
        Array<int> intArray(5);
        std::cout << "Integer array size: " << intArray._size() << std::endl;
        for (unsigned int i = 0; i < intArray._size(); i++) {
            intArray[i] = i + 1;
            std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
        }

        // Test copy constructor
        Array<int> copyArray(intArray);
        std::cout << "Copy array size: " << copyArray._size() << std::endl;
        for (unsigned int i = 0; i < copyArray._size(); i++) {
            std::cout << "copyArray[" << i << "] = " << copyArray[i] << std::endl;
        }

        // Test assignment operator
        Array<int> assignedArray;
        assignedArray = intArray;
        std::cout << "Assigned array size: " << assignedArray._size() << std::endl;
        for (unsigned int i = 0; i < assignedArray._size(); i++) {
            std::cout << "assignedArray[" << i << "] = " << assignedArray[i] << std::endl;
        }

        // Test out of bounds access
        std::cout << "Accessing out of bounds: " << std::endl;
        std::cout << intArray[10] << std::endl; // This should throw an exception

    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
