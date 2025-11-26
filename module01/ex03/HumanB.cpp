/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcao <lcao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:24:14 by lcao              #+#    #+#             */
/*   Updated: 2025/11/24 16:45:22 by lcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB:: HumanB(std::string name): name(name), weapon(NULL){

}

HumanB::~HumanB(void){

}

void HumanB::setWeapon(Weapon& new_weapon){
    this->weapon = &new_weapon;
}

void HumanB::attack(void)
{
    if(this->weapon)
    {
        std::cout << this->name << " attacks with their "
                  << this->weapon->getType() <<std::endl;
    }
    else
    {
        std::cout << this->name << " has no weapon and is just flailing around!" <<std::endl;
    }
}