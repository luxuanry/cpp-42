/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcao <lcao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:48:10 by lcao              #+#    #+#             */
/*   Updated: 2026/03/02 16:54:59 by lcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
    try{
        Bureaucrat robot("robot", 7);
        std::cout << robot << std::endl;

        robot.incrementGrade();
        std::cout << robot << std::endl;

        robot.decrementGrade();
        std::cout << robot << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "unexpected exception: " << e.what() << std::endl;
    }


    try{
        Bureaucrat dog("dog", 0);
        std::cout << dog << std::endl;

    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << "Caught expected exception: " << e.what() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Wrong exception type: " << e.what() << std::endl;
    }

    try{
        Bureaucrat duck("duck", 151);
        std::cout << duck << std::endl;

    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << "Caught expected exception: " << e.what() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Wrong exception type: " << e.what() << std::endl;
    }
}