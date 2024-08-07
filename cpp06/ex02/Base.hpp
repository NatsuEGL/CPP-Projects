/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 09:36:42 by akaabi            #+#    #+#             */
/*   Updated: 2024/08/07 09:42:38 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP


#include <cstdlib>
#include <ctime>
#include <iostream>

class Base{
  public:
  virtual ~Base();  
};
void identify(Base* p);
void identify(Base& p);
Base* generate();

class A : public Base{};
class B : public Base{};
class C : public Base{};



#endif