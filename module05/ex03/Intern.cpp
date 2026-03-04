/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcao <lcao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 18:06:16 by lcao              #+#    #+#             */
/*   Updated: 2026/03/02 16:27:41 by lcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
    std::cout << "Intern Default Constructor called" << std::endl;
}

Intern::Intern(const Intern &other){
    (void)other;
    std::cout << "Intern Copy Constructor called" << std::endl;
}

Intern& Intern::operator=(const Intern &other){
    (void)other;
    std::cout << "Intern Assignment Operator called" << std::endl;
    return *this;
}

Intern::~Intern(){
    std::cout << "Intern Destructor called" << std::endl;
}

static AForm* makeShruberry(const std::string &target){
    return new ShrubberyCreationForm(target);
}

static AForm* makeRobotomy(const std::string &target){
    return new RobotomyRequestForm(target);
}

static AForm* makePresidential(const std::string &target){
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string formName, std::string target){
    std::string formNames[3] = {"Shruberry Creation", "Robotomy Request", "Presidential Pardon"};
    AForm *(*formCreators[])(const std::string &target) = {
        makeShruberry, 
        makeRobotomy, 
        makePresidential};
    for(int i = 0; i < 3; i++){
        if(formName == formNames[i]){
            std::cout << "Intern creates " << formName << std::endl;
            return formCreators[i](target);
        }
    }
    std::cout << "Intern could not find form: " << formName << " doesn't exist!" << std::endl;
    return NULL;
}
