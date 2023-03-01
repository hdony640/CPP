/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:29:33 by hdony             #+#    #+#             */
/*   Updated: 2022/11/01 19:00:36 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string str;
    std::string *stringPTR;
    std::string  &stringREF = str;

    str = "HI THIS IS BRAIN";
    stringPTR = &str;

    std::cout << "str address: " << &str << std::endl;
    std::cout << "stringPTR address: " << stringPTR << std::endl;
    std::cout << "stringREF address: " << &stringREF << std::endl;
    std::cout << "str value: " << str << std::endl;
    std::cout << "value pointed by stringPTR: " << *stringPTR << std::endl;
    std::cout << "value pointed by stringREF: " << stringREF << std::endl;
    return (0);
}