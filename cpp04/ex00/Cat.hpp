/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:24:39 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/22 14:35:47 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"


class Cat : public Animal{
    public : 

    Cat();
    Cat(std::string& name);
    Cat(const Cat& name);
   virtual ~Cat();
    Cat& operator=(const Cat& name);
    void makeSound()const;

};


#endif