/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:02:58 by hdony             #+#    #+#             */
/*   Updated: 2022/11/18 13:55:53 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    /* copy constructor to construct d based on b, I pass a class, not a fpn to the
    constructor so I need a copy constructor*/
    Fixed const d( b );
    /*fpn of b has been copied to fpn of d*/
    a = Fixed( 1234.4321f );
    float   e = 1.0/3;
    Fixed const f( e );
    std::cout << std::endl;
    std::cout << "float: " << (1.0/3) << std::endl;
    std::cout << "e is " << e << std::endl;
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    std::cout << std::endl;
    return (0);
}