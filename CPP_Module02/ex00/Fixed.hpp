/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:03:18 by hdony             #+#    #+#             */
/*   Updated: 2022/11/18 10:15:42 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS
# define FIXED_CLASS

# include <iostream>

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
    Fixed(const Fixed &copy);
    ~Fixed();

    Fixed   &operator=(Fixed const &copy);
    void    setRawBits(int const raw);
    int     getRawBits(void) const;

private:
    /* fixed number is stored in an ineger type */
    int                 _fpn;
    /* static means the value is shared between all instances of the class and const means it doesn't change. */
    /* we tell the computer where to locate the floating point among 32 bits */
    static const int    _frac = 8;
};

#endif