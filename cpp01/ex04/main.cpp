/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:09:30 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/13 16:22:04 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av){

    if (ac != 4) {
        std::cout << "Ur arguments are false -> TIP : filename - av[1] - av[2]" << std::endl;
        return 1;
    }
    std::string Thefile = av[1];
    std::string str1 = av[2];
    std::string str2 = av[3];
    if (ReplaceMyfile(Thefile, str1, str2) == 0)
    {
        std::cout << "Replacement completed. Check the file: " << Thefile << ".replace" << std::endl;
            return (0);
    }
    return 0;
}