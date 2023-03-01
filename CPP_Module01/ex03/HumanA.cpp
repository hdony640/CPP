/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:47:45 by hdony             #+#    #+#             */
/*   Updated: 2022/11/10 10:20:03 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/* HumanA takes alias of Weapon in its constructor
** initialize _weapon to the alias passed by reference */
HumanA::HumanA(std::string HumanA, Weapon &weapon): _weapon(weapon), _name(HumanA)
{};

HumanA::~HumanA()
{};

/* I need a getter to access private element of the alias of my weapon classes */
void    HumanA::attack()
{
    std::cout << this->_name << " attacks with their "
     << this->_weapon.getType() << std::endl;
}