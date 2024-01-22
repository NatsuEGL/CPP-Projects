/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:31:54 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/19 10:56:42 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap {
    public : 

    ScavTrap();
    ScavTrap(const ScavTrap& N);
    ~ScavTrap();
    void  attack(const std::string& target);
    ScavTrap& operator=(const ScavTrap& name);
    void guardGate();
    
};



#endif