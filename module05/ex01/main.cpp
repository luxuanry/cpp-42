/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcao <lcao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 17:23:41 by lcao              #+#    #+#             */
/*   Updated: 2026/02/18 18:13:41 by lcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
    try{
        Bureaucrat robot("robot", 7);
        std::cout << robot << std::endl;

        Form formA("FormA", 5, 10);
        std::cout << formA << std::endl;

        robot.signForm(formA);
        std::cout << formA << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "unexpected exception: " << e.what() << std::endl;
    }
    std::cout << "-----------------------------" << std::endl;
    try{
        Bureaucrat dog("dog", 1);
        std::cout << dog << std::endl;

        Form formB("FormB", 5, 10);
        std::cout << formB << std::endl;

        dog.signForm(formB);
        std::cout << formB << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "unexpected exception: " << e.what() << std::endl;
    }
}