/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:42:16 by hdony             #+#    #+#             */
/*   Updated: 2022/12/06 12:40:06 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>

template < typename T >
class   Array
{
public:
    Array(): _n(0){
        std::cout << "Empty array created" << std::endl;
        this->_t = new T[_n]; 
    }
    Array(unsigned int n): _n(n){
        std::cout << "Array of " << this->_n << " created" << std::endl;
        this->_t = new T[n];
    }
    Array(const Array &rhs): _t(NULL), _n(rhs.size()){
        
       std::cout << "Copy constructor called to create object" << std::endl;
       *this = rhs;
    }
    ~Array() {
        // std::cout << "Destructor called" << std::endl;
        delete[] this->_t;
    }
    const Array&    operator=(const Array &rhs)
    {
        std::cout << "overload= called" << std::endl;
        if (this != &rhs)
        {
            delete[] this->_t;
            this->_t = new T[rhs.size()];
            for (unsigned int i = 0; i < rhs.size(); i++)
                this->_t[i] = rhs.getT(i);
        }
        return (*this);
    }
    T &operator[](unsigned int i){
        if (i < 0 || i >= this->size())
            throw(InvalidIndex());
		return _t[i];
	}
    const T &operator[](unsigned int i) const{
        if (i < 0 || i >= this->size())
            throw(InvalidIndex());
		return _t[i];
	}
    T   getT(int idx) const { return (this->_t[idx]); }
    unsigned int size() const { return (this->_n); }
    class   InvalidIndex: public std::exception{
        public:
            virtual const char  *what() const throw() { return ("Index out of range"); }
    };
    
private:
    T               *_t;
    unsigned int    _n;
};
