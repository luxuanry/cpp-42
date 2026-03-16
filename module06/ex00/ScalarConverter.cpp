/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcao <lcao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 18:13:41 by lcao              #+#    #+#             */
/*   Updated: 2026/03/13 17:35:58 by lcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) { (void)other; }

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    (void)other;
    return *this;
}

ScalarConverter::~ScalarConverter() {}

bool isChar(const std::string& s){
    if(s.length() == 1 && !std::isdigit(s[0])){
        return true;
    }
    return false;
}

bool isInt(const std::string& s){
    size_t i = 0;
    if(s[i] == '+' || s[i] == '-'){
        i++;
    }
    for(; i < s.length(); i++){
        if(!std::isdigit(s[i])){
            return false;
        }
    }
    return true;
}

bool isFloat(const std::string& s){
    if(s== ".f" || s == "+.f" || s == "-.f"){
        return false;
    }
    if(s.length() < 2 || s[s.length() - 1] != 'f'){
        return false;
    }

    int dotCount = 0;
    size_t i = 0;
    if(s[i] == '+' || s[i] == '-'){
        i++;
    }
    for(; i<s.length() - 1; i++){
        if(s[i] == '.'){
            dotCount++;
        }
        else if(!std::isdigit(s[i]) )
        {
            return false;
        }
    }
    return (dotCount == 1);
}

bool isDouble(const std::string& s){
    if(s == "." || s == "+." || s == "-."){
        return false;
    }
    if (s.length() < 2 || s[s.length() - 1] == 'f') {
        return false;
    }
    int dotCount = 0;
    size_t i = 0;
    if(s[i] == '+' || s[i] == '-'){
        i++;
    }
    for(; i < s.length(); i++){
        if(s[i] == '.'){
            dotCount++;
        }
        else if(!std::isdigit(s[i]) )
        {
            return false;
        }
    }
    return (dotCount == 1);
}

void ScalarConverter::convert(const std::string& literal)
{
    if (literal == "nan" || literal == "nanf" || 
        literal == "+inf" || literal == "+inff" || 
        literal == "-inf" || literal == "-inff") 
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        if (literal == "nan" || literal == "nanf") 
        {
            std::cout << "float: nanf" << std::endl;
            std::cout << "double: nan" << std::endl;
        } 
        else if (literal == "+inf" || literal == "+inff") 
        {
            std::cout << "float: +inff" << std::endl;
            std::cout << "double: +inf" << std::endl;
        } 
        else 
        {
            std::cout << "float: -inff" << std::endl;
            std::cout << "double: -inf" << std::endl;
        }
        return;
    }
    
    if(isChar(literal)){
        char c = literal[0];
        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
    }
else if (isInt(literal)) {
        double val = std::strtod(literal.c_str(), NULL);
        if (val >= 32 && val <= 126) {
            std::cout << "char: '" << static_cast<char>(val) << "'" << std::endl;
        } else {
            std::cout << "char: Non displayable" << std::endl;
        }
        if (val < -2147483648.0 || val > 2147483647.0) {
            std::cout << "int: impossible" << std::endl;
        } else {
            std::cout << "int: " << static_cast<int>(val) << std::endl;
        }
        if (val < 1000000.0 && val > -1000000.0) {
            std::cout << "float: " << static_cast<float>(val) << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(val) << ".0" << std::endl;
        } else {
            std::cout << "float: " << static_cast<float>(val) << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(val) << std::endl;
        }
    }
    else if (isFloat(literal)) {
        float f = std::strtof(literal.c_str(), NULL);
        if (f >= 32 && f <= 126) {
            std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
        } else {
            std::cout << "char: Non displayable" << std::endl;
        }
        
        if (f < -2147483648.0f || f > 2147483647.0f) {
            std::cout << "int: impossible" << std::endl;
        } else {
            std::cout << "int: " << static_cast<int>(f) << std::endl;
        }
        // Check if the float is a whole number and within a reasonable range for display
        if (f < 1000000.0f && f > -1000000.0f && f == static_cast<int>(f)) {
            std::cout << "float: " << f << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
        } else {
            std::cout << "float: " << f << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(f) << std::endl;
        }
    }
    
    else if (isDouble(literal)) {
        double d = std::strtod(literal.c_str(), NULL);
        if (d >= 32 && d <= 126) {
            std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
        } else {
            std::cout << "char: Non displayable" << std::endl;
        }
        
        if (d < -2147483648.0 || d > 2147483647.0) {
            std::cout << "int: impossible" << std::endl;
        } else {
            std::cout << "int: " << static_cast<int>(d) << std::endl;
        }
        if (d < 1000000.0 && d > -1000000.0 && d == static_cast<int>(d)) {
            std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
            std::cout << "double: " << d << ".0" << std::endl;
        } else {
            std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
            std::cout << "double: " << d << std::endl;
        }
    }
    else{
        std::cout << "Error: Invalid literal: " << literal << std::endl;
    }
}
