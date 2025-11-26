/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcao <lcao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:16:41 by lcao              #+#    #+#             */
/*   Updated: 2025/11/26 18:24:09 by lcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;

    std::cout << "Harl complains at DEBUG level"<< std::endl;
    harl.complain("DEBUG");
    std::cout<< std::endl;
    
    std::cout << "Harl complains at INFO level"<< std::endl;
    harl.complain("INFO");
    std::cout<< std::endl;

    std::cout << "Harl complains at WARNING level"<< std::endl;
    harl.complain("WARNING");
    std::cout<< std::endl;

    std::cout << "Harl complains at ERROR level"<< std::endl;
    harl.complain("ERROR");
    std::cout<< std::endl;

    std::cout << "Harl complains at an unknown level"<< std::endl;
    harl.complain("UNKNOWN");
    std::cout<< std::endl;

    return 0;
}
