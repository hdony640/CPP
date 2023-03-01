/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:06:58 by hdony             #+#    #+#             */
/*   Updated: 2022/12/06 10:17:04 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_CLASS
# define WHATEVER_CLASS

#include <iostream>

template < typename T >
void    swap(T &a, T &b)
{
    T   tmp;
    
    tmp = a;
    a = b;
    b = tmp;
}

template < typename T >
const T   &min(const T &a, const T &b)
{
    if (a < b)
        return (a);
    return (b); 
}

template < typename T >
const T   &max(const T &a, const T &b)
{
    if (a > b)
        return (a);
    return (b); 
}

#endif