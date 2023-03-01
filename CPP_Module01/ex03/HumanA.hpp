/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:24:34 by hdony             #+#    #+#             */
/*   Updated: 2022/11/02 13:41:02 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS
# define HUMANA_CLASS

# include "Weapon.hpp"
# include <string>

class   HumanA
{
public:
    HumanA(std::string HumanA, Weapon &weapon);
    ~HumanA();
    
    void    attack();
    
private:
    Weapon      &_weapon;
    std::string _name;
};

#endif
