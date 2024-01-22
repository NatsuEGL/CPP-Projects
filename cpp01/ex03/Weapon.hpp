/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:23:25 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/14 15:30:57 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP


#include <iostream>


class Weapon
{
    private :
    
    std::string type;
    public :


    Weapon();
    Weapon(std::string name);
    ~Weapon();
    void setType(std::string name);
    const std::string& getType();
};

#endif