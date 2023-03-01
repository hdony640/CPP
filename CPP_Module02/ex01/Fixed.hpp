/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:03:18 by hdony             #+#    #+#             */
/*   Updated: 2022/11/18 13:50:10 by hdony            ###   ########.fr       */
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
    void            setRawBits(int const raw);
    int             getRawBits(void) const;

private:
    int                 _fpn;
    /* static means the value is shared between all instances of the class and const means it doesn't change. */
    static const int    _frac = 5;
};

std::ostream&   operator<<(std::ostream& cout, const Fixed& copy);

#endif