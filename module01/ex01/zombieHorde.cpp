/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcao <lcao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 18:13:55 by lcao              #+#    #+#             */
/*   Updated: 2025/11/21 18:20:18 by lcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie* zombieHorde( int N, std::string name ) {
    if (N <= 0) {
        std::cerr << MAGENTA << "Invalid horde size (N <= 0)." << RESET << std::endl;
        return NULL;
    }
    std::cout << MAGENTA << "\n[HORDE OPERATION] Allocating " << N << " Zombies in a SINGLE memory block Allocating 10 Zombies in a SINGLE memory block (using new[])... " << RESET << std::endl;

    Zombie* horde = new Zombie[N]; 
    for (int i = 0; i < N; ++i) {
        horde[i].setName(name); 
    }
    std::cout << MAGENTA << "[HORDE OPERATION] Allocation and Initialization complete. Returning pointer to the first zombie." << RESET << std::endl;
    return horde;
}