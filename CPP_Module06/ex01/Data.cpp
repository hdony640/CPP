/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:33:09 by hdony             #+#    #+#             */
/*   Updated: 2022/12/01 11:00:14 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{}

Data::Data(const Data& rhs)
{
    *this = rhs;
}

Data::~Data()
{}

Data&   Data::operator=(const Data& rhs)
{
    if (this != &rhs)
        *this = rhs;
    return (*this);
}

/* uintptr_t: 
** an unsigned integer type with the property that any valid pointer to void can be converted to this type,
** then converted back to pointer to void, and the result will compare equal to the original pointer
*/
uintptr_t Data::serialize(Data* ptr)
{
    void        *a;
    uintptr_t   b;

    a = reinterpret_cast<void *>(ptr);
    b = reinterpret_cast<uintptr_t>(a);
    return (b);
}

Data* Data::deserialize(uintptr_t raw)
{
    Data    *ptr;

    ptr = reinterpret_cast<Data *>(raw);
    return (ptr);
}