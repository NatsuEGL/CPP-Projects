/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:31:37 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/18 13:01:50 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include<string>


class ClapTrap{
  protected :
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