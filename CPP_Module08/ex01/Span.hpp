/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:04:21 by hdony             #+#    #+#             */
/*   Updated: 2022/12/09 14:46:35 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS
# define SPAN_CLASS

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
public:
    Span();
    Span(const Span &rhs);
    Span(unsigned int);
    ~Span();

    void                addNumber(int nb);
    void                addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite);
    const Span&         operator=(const Span &rhs);
    unsigned int        getN() const;
    std::vector<int>    getVector() const;
    void                display() const;
    int                 longestSpan() const;
    int                 shortestSpan();
    
    class SpanOutofRange : public std::exception
    {
        public:
            const char  *what() const throw();
    };

private:
    std::vector<int>    _vec;
    unsigned int        _N;
};
std::ostream& operator<<(std::ostream& cout, const Span& rhs);


#endif