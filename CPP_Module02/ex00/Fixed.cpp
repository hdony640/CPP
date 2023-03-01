/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:03:21 by hdony             #+#    #+#             */
/*   Updated: 2022/11/18 10:17:25 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fpn(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Default Destructor called" << std::endl;
}

/* copy constructor takes a ref of d and use it 
to initialize the object e */
Fixed::Fixed(const Fixed& copy)
{
   std::cout << "Copy constructor called" << std::endl;
   *this = copy;
}

/* take an alias of b as parameter and use it to initialize the object c */
Fixed &Fixed::operator=(const Fixed&  copy)
{
    std::cout << "Overload of assignment operator" << std::endl;
    this->_fpn = copy.getRawBits();
	return (*this);
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits" << std::endl;
    return (this->_fpn);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits" << std::endl;
    this->_fpn = raw;
}