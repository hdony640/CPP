/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:35:36 by hdony             #+#    #+#             */
/*   Updated: 2022/11/01 18:09:40 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS
# define ZOMBIE_CLASS

# include <string>
# include <iostream>
# include <new>

class   Zombie
{
public:
    Zombie();
    ~Zombie();
    
    Zombie(std::string name);
    void    announce(void);
    void    set_name(std::string name);

private:
    std::string _name;    
};

Zombie* zombieHorde(int N, std::string name);

#endif