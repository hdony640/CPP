/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:33:03 by hdony             #+#    #+#             */
/*   Updated: 2022/11/10 10:14:33 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const &_type)
{
    this->_type = _type;
};

Weapon::~Weapon()
{};

std::string const &   Weapon::getType() const
{
    return(this->_type);
}

void    Weapon::setType(std::string _type)
{
    this->_type = _type;
}
