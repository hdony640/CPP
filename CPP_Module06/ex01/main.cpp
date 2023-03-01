/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:00:01 by hdony             #+#    #+#             */
/*   Updated: 2022/11/30 11:15:47 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

/* Stackoverflow: 
** static_cast can only cast between two related types. An integer is not related to a pointer and vice versa,
** so you need to use reinterpret_cast instead, which tells the compiler to reinterpret the bits of the integer
** as if they were a pointer (and vice versa)
*/
int main()
{
    Data        data;
    uintptr_t   a;

    std::cout << &data << std::endl;
    a = data.serialize(&data);
    std::cout << a << std::endl;
    std::cout << data.deserialize(a) << std::endl;
    return (0);
}