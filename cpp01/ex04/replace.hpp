/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:09:23 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/13 16:14:59 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int ReplaceMyfile(const std::string& filename, const std::string& s1, const std::string& s2);
std::string replaceThestring(const std::string &buff, const std::string s1, const std::string s2);
#endif