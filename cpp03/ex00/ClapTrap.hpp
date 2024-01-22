/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:50:34 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/19 15:17:23 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>



class ClapTrap{
  private :
    std::string Name;
    unsigned int  HitPoints;
    unsigned int  EnergyPoints;
    unsigned int  AttackDamage;
  public:
    ClapTrap();
    ClapTrap(const std::string& N);
    ClapTrap(const ClapTrap& N);
    ~ClapTrap();
    ClapTrap& operator=(const ClapTrap& N);
  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
    
};


#endif