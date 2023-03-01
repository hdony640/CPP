/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:00:01 by hdony             #+#    #+#             */
/*   Updated: 2022/12/06 12:41:31 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define MAX_VAL 750

int main(int, char**)
{
    std::cout << "< Instanciate class base on template >" << std::endl;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    Array<int> b;
    
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    std::cout << "< Instanciate class base on template w. cpy constructor >" << std::endl;
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    std::cout << "< Accessing array elements w. [] >" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
     try
    {
        std::cout << "numbers[MAX_VAL - 1]: " << numbers[MAX_VAL - 1] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    std::cout << "< Double >" << std::endl;
    Array<double> a(MAX_VAL);
    for (int i = 0; i < MAX_VAL; i++)
    {
        a[i] = rand();
    }
    try
    {
        std::cout << std::fixed << std::setprecision(1);
        std::cout << a[456] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "< Float >" << std::endl;
    Array<float> c(MAX_VAL);
    std::cout << "< Char >" << std::endl;
    Array<char> d(MAX_VAL);
    std::cout << "< String >" << std::endl;
    Array<std::string> e(MAX_VAL);
    try
    {
       e[0] = "string";
       std::cout << e[0] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    const Array<int> f(10);
    std::cout << f[0] << std::endl;
    // f[1] = 1;
    return (0);
}