/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:22:57 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/13 20:06:44 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP


#include <iostream>
#include "Weapon.hpp"


class HumanA{
  
  private :
    std::string name;
    Weapon& Weapn;

  public : 

    HumanA(std::string n, Weapon &a);

    ~HumanA();
    void attack();
};
#endif