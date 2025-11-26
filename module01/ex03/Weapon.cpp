/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcao <lcao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:43:13 by lcao              #+#    #+#             */
/*   Updated: 2025/11/24 15:43:29 by lcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string initial_type) : type(initial_type){

}

Weapon::~Weapon(void){

}

const std::string& Weapon::getType(void) const{
    return this->type;
}
void Weapon::setType(std::string new_type){
    this->type = new_type;
}
