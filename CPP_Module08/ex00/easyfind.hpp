/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:15:22 by hdony             #+#    #+#             */
/*   Updated: 2022/12/09 10:47:02 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_CLASS
# define EASYFIND_CLASS

# include <iostream>
# include <vector>
# include <array>
# include <list>

class easyfindException: public std::exception
{
public:
    const char* what() const throw();
};

template < typename T >
typename T::iterator easyfind(T &rhs, int nb)
{
    typename T::iterator it;
    it = std::find (rhs.begin(), rhs.end(), nb);
    if (it == rhs.end())
        throw(easyfindException());
    return (it);
}

#endif