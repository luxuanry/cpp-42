/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcao <lcao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 16:32:00 by lcao              #+#    #+#             */
/*   Updated: 2026/02/18 18:11:09 by lcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): _name("Default"), _isSigned(false), _signGrade(150), _execGrade(150){
    std::cout<< "Form Default Constructor called" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade)
    : _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
        if(signGrade < 1 || execGrade < 1)
            throw Form::GradeTooHighException();
        if(signGrade > 150 || execGrade > 150)
            throw Form::GradeTooLowException();
}

Form::Form(const Form &other)
    : _name(other._name),
    _isSigned(other._isSigned),
    _signGrade(other._signGrade),
    _execGrade(other._execGrade)       
{
    std::cout << "Form deep copy called" << std::endl;
}

Form::~Form(){
    std::cout << "Form Destructor called" << std::endl;
}

Form& Form::operator=(const Form& other){
    if(this != &other){
        this->_isSigned = other._isSigned;
    }
    return *this;
}

std::string Form::getName()const{
    return _name;
}

bool        Form::getSigned()const{
    return _isSigned;
}
int         Form::getSignGrade()const{
    return _signGrade;
}
int         Form::getExecGrade()const{
    return _execGrade;
}

void Form::beSigned(const Bureaucrat& i){
    if(i.getGrade() > this->_signGrade)
        throw Form::GradeTooLowException();
    this->_isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Bureaucrat grade is too high to sign this form!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Bureaucrat grade is too low to sign this form!";
}

std::ostream& operator<<(std::ostream& os, const Form& f){
    os << "Form " << f.getName() << ", signed: " << (f.getSigned() ? "Yes" : "No")
       << ", sign grade: " << f.getSignGrade() << ", exec grade: " << f.getExecGrade() << ".";
    return os;
}

