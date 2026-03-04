/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcao <lcao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 18:57:17 by lcao              #+#    #+#             */
/*   Updated: 2026/03/02 16:28:17 by lcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(){
    std::srand(time(NULL));
    try {
        Bureaucrat Rachel("Rachel", 1);

        Intern InternRoss;
        AForm *form1 = InternRoss.makeForm("Robotomy Request", "Central Park");
        if(form1) {
            Rachel.signForm(*form1);
            Rachel.executeForm(*form1);
            delete form1;
        }

        std::cout << "-----------form does not exist------------" << std::endl;
        AForm *form2 = InternRoss.makeForm("buy coffee", "Gunther");
        if(form2 != NULL) {
            delete form2;
        }
    }catch(std:: exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
