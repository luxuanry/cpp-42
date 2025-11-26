/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcao <lcao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:48:43 by lcao              #+#    #+#             */
/*   Updated: 2025/11/26 19:00:25 by lcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

const std::string LEVELS[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

int get_level_index(const std::string& level_str)
{
    for(int i = 0; i < 4; i++)
    {
        if(LEVELS[i] == level_str)
        {
            return i;
        }
    }
    return -1;
}
int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cerr << "Usage: " << av[0] << " <DEBUG|INFO|WARNING|ERROR>" << std::endl;
        return 1;
    }
    
    Harl harl;

    int level_index = get_level_index(av[1]);
    switch (level_index)
    {
        case 0:
            harl.complain(LEVELS[0]);
        case 1:
            harl.complain(LEVELS[1]);
        case 2:
            harl.complain(LEVELS[2]);
        case 3:
            harl.complain(LEVELS[3]);
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return 0;
}