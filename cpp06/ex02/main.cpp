/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 09:36:45 by akaabi            #+#    #+#             */
/*   Updated: 2024/08/07 09:58:11 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base* generate();
void identify(Base* p);
void identify(Base& p);

int main() {
    Base* ptr = generate();
    identify(ptr);
    identify(*ptr);

    delete ptr;
    return 0;
}