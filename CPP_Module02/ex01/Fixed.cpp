/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:03:21 by hdony             #+#    #+#             */
/*   Updated: 2022/11/18 13:49:28 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fpn(0)
{
    std::cout << "Fixed object created with default constructor" << std::endl;
}

/*copy constructor takes a ref of the object 'b' and use it to initialize the object 'd'*/
Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Fixed object created with copy constructor" << std::endl;
   /*'=' between two classes needs to be overloaded to work properly*/
   *this = copy;
}

/*left bitshifting operation of 8 bits of int_arg argument or (int_arg * 2^_frac)
** to tell the compiler where to put the binary point*/
Fixed::Fixed(const int int_arg)
{
    this->_fpn = (int_arg << _frac);
    std::cout << "Fixed object created with int constructor" << std::endl;
}

Fixed::Fixed(const float float_arg)
{
    this->_fpn = (int)std::roundf((float_arg * 32.0));
    std::cout << "Fixed object created with float constructor" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Fixed object destroyed" << std::endl;
}

/*take an alias of 'b' as parameter and use it to initialize the object 'c'*/
Fixed   &Fixed::operator=(const Fixed& copy)
{
    // std::cout << "Overload of assignment operator" << std::endl;
    this->_fpn = copy.getRawBits();
	return (*this);
}

std::ostream&   operator<<(std::ostream& cout, const Fixed& copy)
{
    // std::cout << "Overload of stream operator" << std::endl;
    cout << copy.toFloat();
    return (cout);
}

int     Fixed::getRawBits(void) const
{
    return (this->_fpn);
}

void    Fixed::setRawBits(int const raw)
{
    this->_fpn = raw;
}

float   Fixed::toFloat(void) const
{
    return ((float)(this->_fpn / 32.0));
}

int     Fixed::toInt( void ) const
{
    return (this->_fpn  >> _frac);
}