/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:09:05 by hdony             #+#    #+#             */
/*   Updated: 2022/12/06 12:19:01 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

template < typename T, size_t N >
size_t   size( T(&)[N] )
{
    return N ;
}

template <typename T>
void    func(const T &t)
{
    std::cout << t << std::endl;
}

template <typename T>
void    iter(T array[], size_t size, void (*func)(const T &param))
{
    for (size_t i = 0; i < size; i++)
    {
        func(array[i]);
    }
}