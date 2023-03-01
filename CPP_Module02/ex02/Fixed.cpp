/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:03:21 by hdony             #+#    #+#             */
/*   Updated: 2022/11/24 16:17:01 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
**                            **  
** Constructors & Destructors **
**                            **  
*/

Fixed::Fixed(): _fpn(0)
{}

/*copy constructor takes a ref of the object 'd' and use it to initialize the object 'e'*/
Fixed::Fixed(const Fixed& copy)
{
    *this = copy;
}

Fixed::Fixed(const int int_arg)
{
    this->_fpn = (int_arg << _frac);
}

Fixed::Fixed(const float float_arg)
{
    this->_fpn = (int)std::roundf((float_arg * 256.0));
}

Fixed::~Fixed()
{}

/*
**              **  
** Overlaoding  **
**              **  
*/


/*take an alias of 'b' as parameter and use it to initialize the object 'c'*/
Fixed&  Fixed::operator=(const Fixed& copy)
{
    this->_fpn = copy.getRawBits();
	return (*this);
}

std::ostream&   operator<<(std::ostream& cout, const Fixed& copy)
{
    cout << copy.toFloat();
    return (cout);
}

/*                          **  
** Comparison overloading   **
*/

bool    Fixed::operator>(const Fixed& copy) const
{
    if (this->_fpn > copy.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator<(const Fixed& copy) const
{
    if (this->_fpn < copy.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator>=(const Fixed& copy) const
{
    if (this->_fpn >= copy.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator<=(const Fixed& copy) const
{
    if (this->_fpn <= copy.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator==(const Fixed& copy) const
{
    if (this->_fpn == copy.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator!=(const Fixed& copy) const
{
    if (this->_fpn != copy.getRawBits())
        return (true);
    return (false);
}

/*                          **  
** Arithmetic overlaoding   **
*/

Fixed   Fixed::operator+(const Fixed& copy)
{
    Fixed   tmp;

    tmp.setRawBits(this->_fpn + copy.getRawBits());
    return (tmp);
}

Fixed   Fixed::operator-(const Fixed& copy)
{
    Fixed   tmp;
    
    tmp._fpn = this->_fpn - copy.getRawBits();
    return(tmp);
}

Fixed   Fixed::operator*(const Fixed& copy)
{
    Fixed   tmp;
    
    tmp._fpn = ( this->_fpn * copy.getRawBits() ) >> this->_frac; 
    return (tmp);
}

Fixed   Fixed::operator/(const Fixed& copy)
{
    Fixed   tmp;

    tmp._fpn = (this->_fpn << this->_frac) / copy.getRawBits();
    return (tmp);
}

/*                                      **  
** incrementing/decrementing operators  **
*/

/* prefix */
Fixed&  Fixed::operator++(void)
{
    this->_fpn++;
    return (*this); 
}

Fixed&  Fixed::operator--(void)
{
    this->_fpn--;
    return (*this); 
}

/* postfix */
Fixed   Fixed::operator++(int)
{
    Fixed   tmp;

    tmp = *this;
    this->_fpn++;
    return (tmp);
    
}

Fixed   Fixed::operator--(int)
{
    Fixed   tmp;

    tmp = *this;
    this->_fpn--;
    return (tmp);    
}

/*                       **  
** overloaded functions  **
*/

Fixed&   Fixed::min(Fixed& one, Fixed& two)
{
    if (one.operator>(two) == true)
        return (two);
    return (one);
}

const Fixed&   Fixed::min(const Fixed& one, const Fixed& two)
{
    if (one.operator>(two) == true)
        return (two);
    return (one);
}

Fixed&  Fixed::max(Fixed& one, Fixed& two)
{
    if (one.operator>(two) == true)
        return (one);
    return (two);
}

const Fixed&   Fixed::max(const Fixed& one, const Fixed& two)
{
    if (one.operator>(two) == true)
        return (one);
    return (two);
}

/*
**                  **  
** Setter & Getter  **
**                  **  
*/

int     Fixed::getRawBits(void) const
{
    return (this->_fpn);
}

void    Fixed::setRawBits(int const raw)
{
    this->_fpn = raw;
}

/*
**                  **  
** Member functions **
**                  **  
*/

float   Fixed::toFloat(void) const
{
    return ((float)(this->_fpn / 256.0));
}

int     Fixed::toInt( void ) const
{
    return (this->_fpn  >> _frac);
}