/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:04:35 by hdony             #+#    #+#             */
/*   Updated: 2022/12/09 14:52:07 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{}

Span::Span(unsigned int N): _N(N)
{
    std::cout << "Vector with N of " << this->_N << " created\n";
}

Span::Span(const Span &rhs)
{
    *this = rhs;
}

Span::~Span()
{}

const Span& Span::operator=(const Span &rhs)
{
    if (this != &rhs)
    {
        this->_vec = rhs.getVector();
        this->_N = rhs.getN(); 
    }
    return (*this);
}

unsigned int    Span::getN() const
{
    return (this->_N);
}

std::vector<int>    Span::getVector() const
{
    return (this->_vec);
}

void    Span::display() const
{
    for (unsigned long i = 0; i < this->_vec.size(); i++)
    {
        std::cout << this->_vec[i] << std::endl;
    }
}

void Span::addNumber(int nb)
{
    // std::cout << "adding number to the vector" << std::endl;
    if (this->_vec.size() >= this->getN())
        throw(SpanOutofRange());
    this->_vec.push_back(nb);
    // std::cout << "vec size: " << this->_vec.size() << std::endl;
}

void    Span::addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite)
{
    if (this->_vec.size() >= this->getN())
        throw(SpanOutofRange());
    for (; it != ite; it++)
        this->_vec.push_back(*it);
}

int Span::longestSpan() const
{
    int max;
    int min;
    int longestSpan;
    
    max = *std::max_element(this->_vec.begin(), this->_vec.end());
    // std::cout << "max: " << max << std::endl;
    min = *std::min_element(this->_vec.begin(), this->_vec.end());
    // std::cout << "min: " << min << std::endl;
    longestSpan = (min - max);
    return (std::abs(longestSpan));
}

int Span::shortestSpan()
{
    int shortestSpan;
    int i;

    shortestSpan = *std::max_element(this->_vec.begin(), this->_vec.end()); 
    i = 0;
    std::sort(this->_vec.begin(), this->_vec.end());

    for (std::vector<int>::iterator it = this->_vec.begin(); it != this->_vec.end(); it++)
    {
        if (i && this->_vec[i] - this->_vec[i - 1] < shortestSpan)
            shortestSpan = std::abs(this->_vec[i] - this->_vec[i - 1]);
        i++;
    }
    return (shortestSpan);
}

std::ostream& operator<<(std::ostream& cout, const Span& rhs)
{
    // std::vector<int>::iterator  it =  rhs.getVector().begin();
    // std::vector<int>::iterator  ite =  rhs.getVector().end();

    // for (; it != ite; it++)
    //     cout << *it;
    // return (cout);
    for (unsigned long i = 0; i < rhs.getVector().size(); i++)
    {
        if ( i + 1 <  rhs.getVector().size() )
            cout << rhs.getVector()[i] << ", ";
        else
            cout << rhs.getVector()[i];
    }
    cout << std::endl;
    return (cout);
}

const char  *Span::SpanOutofRange::what() const throw()
{
    return ("N elements are already in the vector, adding an element is not possible");
}