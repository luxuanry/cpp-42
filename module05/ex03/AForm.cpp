/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcao <lcao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 16:03:26 by lcao              #+#    #+#             */
/*   Updated: 2026/02/27 15:41:30 by lcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(): _name("Default"), _isSigned(false), _signGrade(150), _execGrade(150){
    std::cout<< "AForm Default Constructor called" << std::endl;
}

AForm::AForm(std::string name, int signGrade, int execGrade)
    : _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
        if(signGrade < 1 || execGrade < 1)
            throw AForm::GradeTooHighException();
        if(signGrade > 150 || execGrade > 150)
            throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &other)
    : _name(other._name),
    _isSigned(other._isSigned),
    _signGrade(other._signGrade),
    _execGrade(other._execGrade)       
{
    std::cout << "Form deep copy called" << std::endl;
}

AForm::~AForm(){
    std::cout << "Form Destructor called" << std::endl;
}

AForm& AForm::operator=(const AForm& other){
    if(this != &other){
        this->_isSigned = other._isSigned;
    }
    return *this;
}

std::string AForm::getName()const{
    return _name;
}

bool        AForm::getSigned()const{
    return _isSigned;
}
int         AForm::getSignGrade()const{
    return _signGrade;
}
int         AForm::getExecGrade()const{
    return _execGrade;
}

void AForm::beSigned(const Bureaucrat& i){
    if(i.getGrade() > this->_signGrade)
        throw AForm::GradeTooLowException();
    this->_isSigned = true;
}

void AForm::checkExecutability(Bureaucrat const & executor) const{
    if(!this->_isSigned)
        throw AForm::NotSignedException();
    if(executor.getGrade() > this->_execGrade)
        throw AForm::GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw() {
    return "Bureaucrat grade is too high!";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Bureaucrat grade is too low!";
}

const char* AForm::NotSignedException::what() const throw() {
    return "Form is not signed yet!";
}

std::ostream& operator<<(std::ostream& os, const AForm& f){
    os << "Form " << f.getName() << ", signed: " << (f.getSigned() ? "Yes" : "No")
       << ", sign grade: " << f.getSignGrade() << ", exec grade: " << f.getExecGrade() << ".";
    return os;
}

