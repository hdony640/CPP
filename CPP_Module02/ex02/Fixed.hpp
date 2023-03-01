/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:03:18 by hdony             #+#    #+#             */
/*   Updated: 2022/11/18 10:04:09 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS
# define FIXED_CLASS

# include <iostream>
# include <cmath> 

/*CANONIC FORM
Class containing at least:
1) Constructor default
2) Copy constructor
3) '=' Operator overload
4) Destructor*/

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed& copy);
    Fixed(const int);
    Fixed(const float);
    ~Fixed();

    float           toFloat(void) const;
    int             toInt(void) const;

    Fixed&          operator=(const Fixed&  copy);

    /*comparison operators*/
    bool            operator>(const Fixed&  copy) const;
    bool            operator<(const Fixed&  copy) const;
    bool            operator>=(const Fixed&  copy) const;
    bool            operator<=(const Fixed&  copy) const;
    bool            operator==(const Fixed&  copy) const;
    bool            operator!=(const Fixed&  copy) const;
    /*arithmetic operators*/
    Fixed           operator+(const Fixed&  copy);
    Fixed           operator-(const Fixed&  copy);
    Fixed           operator*(const Fixed&  copy);
    Fixed           operator/(const Fixed&  copy);
    /*incrementing/decrementing operators*/
    Fixed&          operator++(void);
    Fixed&          operator--(void);
    Fixed           operator++(const int);
    Fixed           operator--(const int);
    /*overloaded functions*/
    static Fixed&       min(Fixed& one, Fixed& two);
    static const Fixed& min(const Fixed& one, const Fixed& two);
    static Fixed&       max(Fixed& one, Fixed& two);
    static const Fixed& max(const Fixed& one, const Fixed& two);
    /*setter and getter*/
    void            setRawBits(int const raw);
    int             getRawBits(void) const;

private:
    /* static means the value is shared between all instances of the class
    ** const means it doesn't change. */
    int                 _fpn;
    static const int    _frac = 8;
};

std::ostream&   operator<<(std::ostream& cout, const Fixed& copy);

#endif