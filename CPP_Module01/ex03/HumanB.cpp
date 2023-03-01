/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:50:51 by hdony             #+#    #+#             */
/*   Updated: 2022/11/10 10:23:35 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/* HumanB does not take alias of Weapon in its constructor */
HumanB::HumanB(std::string HumanB): _name(HumanB)
{
};

HumanB::~HumanB()
{};

/* setWeapon takes alias of Weapon and assign it to pointer of HumanB */
void    HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

void    HumanB::attack()
{
    std::cout << this->_name << " attacks with their "
     << this->_weapon->getType() << std::endl;
}