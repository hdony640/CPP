/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:22:36 by hdony             #+#    #+#             */
/*   Updated: 2022/11/30 11:09:39 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_CLASS
# define DATA_CLASS

# include <stdint.h>
# include <iostream>

class Data
{
public:
    Data();
    Data(const Data& rhs);
    ~Data();

    Data&   operator=(const Data& rhs);

    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);

};

#endif
