/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:01:07 by akaabi            #+#    #+#             */
/*   Updated: 2024/08/09 08:27:44 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data S;
    S.data = 42;
    // std::cout << &S.data << std::endl;

    uintptr_t raw = Serializer::serialize(&S);
    // std::cout << &raw << std::endl;
    Data* dataPtr = Serializer::deserialize(raw);

    if (dataPtr == &S) {
        std::cout << "Serialization and deserialization successful!" << std::endl;
        std::cout << "nbr: " << dataPtr->data << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed!" << std::endl;
    }
    // std::cout << dataPtr << std::endl;

    return 0;
}