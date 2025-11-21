/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcao <lcao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 18:42:35 by lcao              #+#    #+#             */
/*   Updated: 2025/11/21 19:34:06 by lcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string brain_string = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain_string;
    std::string &stringREF = brain_string;

    std::cout << "string varaible address: " << &brain_string << std::endl;
    std::cout << "stringPTR address: " << stringPTR << std::endl;
    std::cout << "stringREF address: " << &brain_string << std::endl;

    std::cout << "string variable value: " << brain_string << std::endl;
    std::cout << "stringPTR value: " << *stringPTR << std::endl;
    std::cout << "stringREF value: " << stringREF << std::endl;

    return 0;
}