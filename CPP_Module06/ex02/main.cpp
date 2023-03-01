/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:00:01 by hdony             #+#    #+#             */
/*   Updated: 2022/11/30 14:41:17 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base    *generate(void)
{
    Base    *ptr;
    int random;

    srand(time(NULL));  
    random = 0 + rand() % 3; // Random number between 0 & 1
    // std::cout << random << std::endl;
    switch (random)
    {
        case 0:
        {
            ptr = new A();
            std::cout << "Real type A: " << ptr << std::endl;
            break;
        }
        case 1:
        {
            ptr = new B();
            std::cout << "Real type B: " << ptr << std::endl;
            break;
        }
        case 2:
        {
            ptr = new C();
            std::cout << "Real type C: " << ptr << std::endl;
            break;
        }
        default: return (NULL);
    }
    return (ptr);
}
/* Dynamic casting:
** C’est le seul cast qui a lieu à l’execution et pas à la compilation
** Vu qu’il a lieu au runtime, il ne fonctionne qu’avec le polymorphisme
** RTTI allow the compiler to check if the casting is feasible or not
** dynamic_cast<type to which I want to cast>(to be casted)
** return value: the adress caster or NULL
** fail of dynamic casting: dynamic cast of base class to a cast that is not the base class real type
*/
void identify(Base* p)
{
    if (A *a = dynamic_cast<A *>(p))
        std::cout << "Real type is A*: " << a << std::endl;
    else
        std::cout << "Dynamic casting failed (A*)" << std::endl;
    if (B *b = dynamic_cast<B *>(p))
        std::cout << "Real type is B*: " << b << std::endl;
    else
        std::cout << "Dynamic casting failed (B*)" << std::endl;
    if (C *c = dynamic_cast<C *>(p))
        std::cout << "Real type is C*: " << c << std::endl;
    else
        std::cout << "Dynamic casting failed (C*)" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        std::cout << "Real type is A&: " << &a << std::endl;
    }
    catch(const std::bad_cast& bc)
    {
        std::cout << "Dynamic casting failed (A&)" << std::endl;
    }
    try
    {
        B &b = dynamic_cast<B &>(p);
        std::cout << "Real type is B&: " << &b << std::endl;
    }
    catch(const std::bad_cast& bc)
    {
       std::cout << "Dynamic casting failed (B&)" << std::endl;
    }
    try
    {
        C &c = dynamic_cast<C &>(p);
         std::cout << "Real type is C&: " << &c << std::endl;
    }
    catch(const std::bad_cast& bc)
    {
        std::cout << "Dynamic casting failed (C&)" << std::endl;
    }
}

int main()
{
    Base    *base;
    base = generate();
    identify(base);
    identify(*base);
    return (0);
}