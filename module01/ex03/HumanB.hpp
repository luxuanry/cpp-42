/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcao <lcao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:18:46 by lcao              #+#    #+#             */
/*   Updated: 2025/11/24 16:24:01 by lcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB{
private:
    std::string name;
    Weapon* weapon;

public:
    HumanB(std::string name);
    ~HumanB(void);

    void    setWeapon(Weapon& new_weapon);

    void    attack(void);
};

#endif