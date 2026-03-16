/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcao <lcao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:25:54 by lcao              #+#    #+#             */
/*   Updated: 2026/03/11 18:35:52 by lcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {
    
    std::srand(std::time(NULL));
    Base* mysteriousBox = generate();

    std::cout << "Identifying with pointer: ";
    identify(mysteriousBox);
    std::cout << "Identifying with reference: ";
    identify(*mysteriousBox);
    
    delete mysteriousBox;

    return 0;
}