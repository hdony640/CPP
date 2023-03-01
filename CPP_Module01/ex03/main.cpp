/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:29:46 by hdony             #+#    #+#             */
/*   Updated: 2022/11/10 10:11:24 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
    Weapon  club = Weapon("gun");
    
    HumanA bob ("Bob", club);
    bob.attack();
    club.setType("Browning Hi-Power");
    bob.attack();
    std::cout << std::endl;
    }

    {
    Weapon  club = Weapon("gun");
    
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("Browning Hi-Power");
    jim.attack();
    }
    
}