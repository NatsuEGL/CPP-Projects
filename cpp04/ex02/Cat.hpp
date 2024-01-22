/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:24:39 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/22 14:53:24 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"


class Cat : public AAnimal{
    private : 
    Brain *b;
    public : 

    Cat();
    Cat(const Cat& name);
   virtual ~Cat();
    Cat& operator=(const Cat& name);
    void makeSound()const;

};


#endif