/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcao <lcao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 18:57:17 by lcao              #+#    #+#             */
/*   Updated: 2026/02/25 17:50:37 by lcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
    std::srand(time(NULL));
    try {
        Bureaucrat Rachel("Rachel", 1);
        ShrubberyCreationForm shrubbery("Aesthetic Garden");
        RobotomyRequestForm robotomy("Phoebe");
        PresidentialPardonForm pardon("Monica");

        Rachel.signForm(shrubbery);
        Rachel.executeForm(shrubbery);

        Rachel.signForm(robotomy);
        Rachel.executeForm(robotomy);

        Rachel.signForm(pardon);
        Rachel.executeForm(pardon);
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}