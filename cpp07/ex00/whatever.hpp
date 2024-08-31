/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:55:12 by akaabi            #+#    #+#             */
/*   Updated: 2024/08/28 11:25:33 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP


#include <iostream>

template <typename T>

void swap(T& a, T& b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}
template <typename T>
T min(T&a , T&b)
{
    if (a > b)
        return (b);
    else
        return (a);
}
template <typename T>
T max(T&a , T&b)
{
    if (a > b)
        return (a);
    else
        return (b);
}


#endif 