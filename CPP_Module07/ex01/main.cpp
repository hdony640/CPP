/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:00:01 by hdony             #+#    #+#             */
/*   Updated: 2022/12/06 12:18:37 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

/*int main( void )
{
    int     array[3] = {0, 1, 2};
    float   array_f[3] = {0.0f, 1.1f, 2.2f};
    double  array_d[3] = {0.0, 1.1, 2.2};
    char    array_c[3] = {'a', 'b', 'c'};
    std::string array_s[3] = {"OKKKKKKKK", "OK", "OK"};
    
    std::cout << "<int>" << std::endl;
    iter (array, size(array), &func);
    std::cout << "<float>" << std::endl;
    iter (array_f, size(array_f), &func);
    std::cout << "<double>" << std::endl;
    iter (array_d, size(array_d), &func);
    std::cout << "<char>" << std::endl;
    iter (array_c, size(array_c), &func);
    std::cout << "<string>" << std::endl;
    iter (array_s, size(array_s) , &func);

return 0;
}*/

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };  // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
  Awesome tab2[5];

  iter( tab, 5, print<int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}

