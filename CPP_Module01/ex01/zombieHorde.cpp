/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:35:40 by hdony             #+#    #+#             */
/*   Updated: 2022/11/01 18:19:28 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie  *alloc;
    int     i;

    i = -1;
    alloc = new Zombie[N];
    while (++i < N)
    {
        alloc[i].set_name(name);
    }
    return (alloc);  
}