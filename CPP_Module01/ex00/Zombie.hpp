/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:47:48 by hdony             #+#    #+#             */
/*   Updated: 2022/11/01 17:24:41 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS
# define ZOMBIE_CLASS

# include <iostream>
# include <string>
# include <new>

class   Zombie
{
public:
    Zombie(std::string name);
    ~Zombie();
    
    void    announce(void);

private:
    std::string _name;    
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif