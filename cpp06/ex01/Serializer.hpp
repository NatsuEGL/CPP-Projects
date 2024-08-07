/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 19:45:59 by akaabi            #+#    #+#             */
/*   Updated: 2024/08/06 20:01:34 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <cstdint>
#include <iostream>

struct Data
{
    int data;
};


class Serializer{

    private:
        Serializer();
    public :
    ~Serializer();
    Serializer(Serializer& N);
    Serializer &operator=(Serializer&N);
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};







#endif