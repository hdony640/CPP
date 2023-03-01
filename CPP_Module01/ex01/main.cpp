/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:35:29 by hdony             #+#    #+#             */
/*   Updated: 2022/11/01 18:20:35 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int i;
    Zombie  *alloc;   

    i = -1;
    alloc = zombieHorde(5, "Heap");
    while (++i < 5)
    {
        alloc[i].announce();
    }
    delete [] alloc;
    return (0);
}
