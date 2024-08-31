/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 08:39:38 by akaabi            #+#    #+#             */
/*   Updated: 2024/08/31 08:53:48 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : array(NULL), size(0){};
template <typename T>
Array<T>::Array(unsigned int n) : array(new T[n]()), size(n){};



template <typename T>
Array<T>::Array(const Array& N): array(new T[N.size]()), size(N.size){
    for (unsigned int i = 0; i < size; i++) {
        array[i] = N.array[i];
    }
};

template <typename T>
Array<T>::~Array(){delete[] array;};


template <typename T>
Array<T>& Array<T>::operator=(const Array& N){

    if (this != &N)
    {
        delete[] array;
        
        size = N.size;
        array = new T[size]();
        for (unsigned int i = 0; i < size; i++) {
        array[i] = N.array[i];
    }
    }
    return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= size) {
        throw std::out_of_range("Index out of bounds");
    }
    return array[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
    if (index >= size) {
        throw std::out_of_range("Index out of bounds");
    }
    return array[index];
}

template <typename T>

unsigned int Array<T>::_size() const {
    return size;
}