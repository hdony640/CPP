/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:48:17 by hdony             #+#    #+#             */
/*   Updated: 2022/11/02 14:49:16 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS
# define HUMANB_CLASS

# include <string>
# include "Weapon.hpp"

class   HumanB
{
public:
    HumanB(std::string HumanB);
    ~HumanB();
    
    void    attack();
    void    setWeapon(Weapon &weapon);

private:
    Weapon *_weapon;
    std::string _name;
};

#endif