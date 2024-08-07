/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 09:36:40 by akaabi            #+#    #+#             */
/*   Updated: 2024/08/07 09:58:44 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


Base* generate() {
    srand(time(NULL));
    int random = rand() % 3;
    if (random == 0)
        return new A();
    else if (random == 1)
        return new B();
    else
        return new C();
}


void identify(Base* Z) {
    if (dynamic_cast<A*>(Z))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(Z))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(Z))
        std::cout << "C" << std::endl;
}

void identify(Base& Z) {
    try {
        (void)dynamic_cast<A&>(Z);
        std::cout << "A" << std::endl;
    } catch (const std::bad_cast&) {}

    try {
        (void)dynamic_cast<B&>(Z);
        std::cout << "B" << std::endl;
    } catch (const std::bad_cast&) {}

    try {
        (void)dynamic_cast<C&>(Z);
        std::cout << "C" << std::endl;
    } catch (const std::bad_cast&) {}
}

Base::~Base(){};
