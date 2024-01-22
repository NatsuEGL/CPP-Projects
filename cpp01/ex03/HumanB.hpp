/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:22:59 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/13 20:08:05 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP


#include <iostream>
#include "Weapon.hpp"


class HumanB{
  
  private :
    Weapon* Weapn;
    std::string name;

  public : 

    HumanB(std::string n);

    ~HumanB();
    void setWeapon(Weapon &w);
    void attack();
};

#endif