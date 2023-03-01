/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:08:11 by hdony             #+#    #+#             */
/*   Updated: 2022/11/10 10:14:20 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS
# define WEAPON_CLASS

# include <string> 
# include <iostream> 

class Weapon
{
public:
    Weapon(std::string const &_type);
    ~Weapon();

    std::string const&  getType() const;
    void    setType(std::string _type);

private:
    std::string _type;
};

#endif