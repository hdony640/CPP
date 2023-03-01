/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:47:39 by hdony             #+#    #+#             */
/*   Updated: 2022/11/01 17:33:41 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  *alloc;
    alloc = newZombie("Heap");
    alloc->announce();
    randomChump("Stack");
    delete alloc;
    return (0);
}