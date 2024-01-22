/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:09:25 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/13 20:58:41 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string replaceThestring(const std::string &s, const std::string str1, const std::string str2)
{
    std::string str;
    if (str1.empty())
        return s;
    for (size_t i = 0 ; i < s.length(); i++)
    {
        if (s.substr(i, str1.length()) == str1)
        {
            str += str2;
            i += str1.length() - 1; 
        }
        else
            str += s[i];
    }
    return (str);
}

int ReplaceMyfile(const std::string& myfile, const std::string& str1, const std::string& str2) {

    std::string filename = myfile;
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cout << "The is somthing wrong with the file" << filename << std::endl;
        return 1;
    }
    std::stringstream b;
    b << file.rdbuf();
    file.close();
    std::string s = b.str();
    s = replaceThestring(s, str1, str2);
    std::string newfile = filename + ".replace";
    std::ofstream outfile(newfile);
    if (outfile.is_open()) {
        outfile << s;
        outfile.close();
    }
    else
    {
        std::cout << "The is somthing wrong with the file" << newfile << std::endl;
        return (1);
    }
    return 0;
}