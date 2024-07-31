/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:25:44 by akaabi            #+#    #+#             */
/*   Updated: 2024/07/31 08:23:11 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    Intern someRandomIntern;
    AForm* rrf;
    
    rrf = someRandomIntern.makeForm("robotomy request", "ploto");
    if (rrf) {
        std::cout << *rrf << std::endl;
    }

    rrf = someRandomIntern.makeForm("shrubbery creation", "kaiden");
    if (rrf) {
        std::cout << *rrf << std::endl;
    }

    rrf = someRandomIntern.makeForm("presidential pardon", "sung jin woo");
    if (rrf) {
        std::cout << *rrf << std::endl;
    }

    rrf = someRandomIntern.makeForm("non-existent form", "Natsu");
    if (rrf) {
        std::cout << *rrf << std::endl;
    }

    return 0;
}
