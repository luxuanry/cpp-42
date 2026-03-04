/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcao <lcao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 16:06:40 by lcao              #+#    #+#             */
/*   Updated: 2026/02/18 17:55:40 by lcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class Form{

private:
    const std::string   _name;
    bool                _isSigned;
    const int           _signGrade;
    const int           _execGrade;

public:
    Form();
    Form (const Form &other);
    Form& operator =(const Form &other);
    virtual ~Form();
    
Form(std::string name, int signGrade, int execGrade);

std::string getName()const;
bool        getSigned()const;
int         getSignGrade()const;
int         getExecGrade()const;

void beSigned(const Bureaucrat &i);

class GradeTooHighException : public std::exception{
    public:
        virtual const char* what() const throw();
    };

class GradeTooLowException : public std::exception{
    public:
        virtual const char* what() const throw();
    };
};
std::ostream& operator<<(std::ostream& os, const Form& f);

#endif