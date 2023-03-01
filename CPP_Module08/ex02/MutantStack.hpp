/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:25:59 by hdony             #+#    #+#             */
/*   Updated: 2022/12/12 11:42:52 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>

template < typename T >
class   MutantStack : public std::stack<T>
{
public:
    MutantStack() { std::stack<T>(); };
    MutantStack(const MutantStack<T> &rhs) { *this = rhs; };
    ~MutantStack() {};
    const MutantStack<T>    &operator=(const MutantStack<T> &rhs)
    {
        (void)rhs;
        return (*this); 
    }
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator r_iterator;
    typedef typename std::stack<T>::container_type::const_iterator c_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator c_r_iterator;

    iterator        begin()     { return (std::stack<T>::c.begin()); }
    iterator        end()       { return (std::stack<T>::c.end()); }
    r_iterator      rbegin()    { return (std::stack<T>::c.rbegin()); }
    r_iterator      rend()      { return (std::stack<T>::c.rend()); }
    c_iterator      cbegin() const   { return (std::stack<T>::c.begin()); }
    c_iterator      cend() const      { return (std::stack<T>::c.end()); }
    c_r_iterator    crbegin() const   { return (std::stack<T>::c.rbegin()); }
    c_r_iterator    crend() const   { return (std::stack<T>::c.rend()); }

};

#endif