/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:00:01 by hdony             #+#    #+#             */
/*   Updated: 2022/12/01 10:31:02 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int is_num(std::string string)
{
    int i;

    i = 0;
    while (string[i])
    {
        while (string[i] == '-')
        {
            if (i >= 1)
                std::cout << "Invalid input" << std::endl;
            else
                i++;    
        }
        if (string[i] >= '0' && string[i] <= '9')
            i++;
        else
            return (0);
    }
    return (1);
}

int is_double(std::string string)
{
    int i;

    i = 0;
     if (!string.compare("-inf") || !string.compare("+inf")
     || !string.compare("nan"))
        return (1);
    while (string[i])
    {
        while (string[i] == '-')
        {
            if (i >= 1)
                std::cout << "Invalid input" << std::endl;
            else
                i++;    
        }
        if ((string[i] >= '0' && string[i] <= '9') || string[i] == '.')
            i++;
        else
            return (0);
    }
    return (1);
}

int is_float(std::string string)
{
    int i;

    i = 0;
    if (!string.compare("-inff") || !string.compare("+inff")
     || !string.compare("nanf"))
        return (1);
    while (string[i])
    {
        while (string[i] == '-')
        {
            if (i >= 1)
                std::cout << "Invalid input" << std::endl;
            else
                i++;    
        }
        if ((string[i] >= '0' && string[i] <= '9') || string[i] == '.' || string[i] == 'f')
            i++;
        else
            return (0);
    }
    return (1);
}


void    Conversion::parsing(std::string string)
{
    int         i;

    this->_type = "string";
    i = -1;
    if (string.size() == 1 && isalpha(string[0]))
        this->_type = "char";
    else if (is_num(string))
        this->_type = "int";
    else if (is_double(string))
        this->_type = "double";
     else if (is_float(string))
        this->_type = "float";
    else
        throw(NotValidType());
}

const char    *Conversion::NotValidType::what() const throw()
{
    return ("Invalid type");
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Enter an argument for the program" << std::endl;
        return (1);
    }
    Conversion  conv(argv[1]);
    try
    {
        conv.parsing (argv[1]);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return(1);
    }
    conv.conversion(argv[1]);
    try
    {
        std::cout << conv;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}