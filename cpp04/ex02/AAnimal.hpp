/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:26:06 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/20 10:43:26 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>


class AAnimal{
    protected : 
        std::string type;
    public : 

    AAnimal();
    AAnimal(const std::string& name);
    AAnimal(const AAnimal& name);
    virtual ~AAnimal();
    AAnimal& operator=(const AAnimal& name);
    virtual void makeSound() const = 0;
    std::string getType() const;
};


#endif