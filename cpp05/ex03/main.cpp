/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:25:44 by akaabi            #+#    #+#             */
/*   Updated: 2024/07/03 08:16:29 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    Intern someRandomIntern;
    AForm* rrf;
    
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    if (rrf) {
        std::cout << *rrf << std::endl;
    }

    rrf = someRandomIntern.makeForm("shrubbery creation", "Garden");
    if (rrf) {
        std::cout << *rrf << std::endl;
    }

    rrf = someRandomIntern.makeForm("presidential pardon", "Arthur Dent");
    if (rrf) {
        std::cout << *rrf << std::endl;
    }

    rrf = someRandomIntern.makeForm("non-existent form", "Nowhere");
    if (rrf) {
        std::cout << *rrf << std::endl;
    }

    return 0;
}
