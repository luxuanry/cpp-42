/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcao <lcao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:04:24 by lcao              #+#    #+#             */
/*   Updated: 2025/11/24 16:13:07 by lcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
    : name(name), weapon(weapon){
        
}

HumanA::~HumanA(void){

}

void HumanA::attack(void){
    std::cout << this->name << "attacks with their"
              << this->weapon.getType()<<std::endl;
}