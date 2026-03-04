/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcao <lcao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 18:17:26 by lcao              #+#    #+#             */
/*   Updated: 2026/02/25 15:59:55 by lcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class AForm{

private:
    const std::string   _name;
    bool                _isSigned;
    const int           _signGrade;
    const int           _execGrade;

public:
    AForm();
    AForm (const AForm &other);
    AForm& operator =(const AForm &other);
    virtual ~AForm();
    
AForm(std::string name, int signGrade, int execGrade);

std::string getName()const;
bool        getSigned()const;
int         getSignGrade()const;
int         getExecGrade()const;

void beSigned(const Bureaucrat &i);


virtual void execute(Bureaucrat const & executor) const = 0;

void checkExecutability(Bureaucrat const & executor) const;

class GradeTooHighException : public std::exception{
    public:
        virtual const char* what() const throw();
    };

class GradeTooLowException : public std::exception{
    public:
        virtual const char* what() const throw();
    };

class NotSignedException : public std::exception {
    public:
    virtual const char* what() const throw();
};

};

std::ostream& operator<<(std::ostream& os, const AForm& f);

#endif