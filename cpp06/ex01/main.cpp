/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:01:07 by akaabi            #+#    #+#             */
/*   Updated: 2024/08/06 20:03:33 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data data;
    data.data = 42;
    // data.text = "Hello, World!";

    uintptr_t raw = Serializer::serialize(&data);
    Data* dataPtr = Serializer::deserialize(raw);

    if (dataPtr == &data) {
        std::cout << "Serialization and deserialization successful!" << std::endl;
        std::cout << "nbr: " << dataPtr->data << std::endl;
        // std::cout << "Text: " << dataPtr->text << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed!" << std::endl;
    }
    std::cout << dataPtr << std::endl;

    return 0;
}