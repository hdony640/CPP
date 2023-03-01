/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:31:05 by hdony             #+#    #+#             */
/*   Updated: 2022/12/01 10:53:59 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(): _string("a")
{}

Conversion::Conversion(std::string string): _string(string)
{}

Conversion::Conversion(const Conversion& rhs)
{
    *this = rhs;
}

Conversion::~Conversion()
{}

std::string Conversion::getString() const
{
    return (this->_string);
}

std::string Conversion::getType() const
{
    return (this->_type);
}

char    Conversion::getC() const
{
    if (isnan(this->_f) || isinf(this->_f))
        throw(ImpossibleConversion());
    else if (isnan(this->_d) || isinf(this->_d))
        throw(ImpossibleConversion());
    else if (!isprint(this->_c))
        throw(NotValidConversion());
    else
        return (this->_c);
}

int    Conversion::getI() const
{
    if (isnan(this->_f) || isinf(this->_f))
        throw(ImpossibleConversion());
    else if (isnan(this->_d) || isinf(this->_d))
        throw(ImpossibleConversion());
    else
    return (this->_i);
}

float    Conversion::getF() const
{
    return (this->_f);
}

double    Conversion::getD() const
{
    return (this->_d);
}

Conversion &Conversion::operator=(const Conversion& rhs)
{
    if (this != &rhs)
    {
        this->_string = rhs.getString();
        this->_type = rhs.getType();
        this->_c = rhs.getC();
        this->_i = rhs.getI();
        this->_f = rhs.getF();
        this->_d = rhs.getD();
    }
    return (*this);
}

std::ostream&   operator<<(std::ostream& cout, const Conversion& rhs)
{
    cout << "type: " << rhs.getType() << std::endl;
    try
    {
        rhs.getC();
        std::cout << "char: '" << rhs.getC() << "'" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "char: " << e.what() << std::endl;
    }
    try
    {
        rhs.getI();
        cout << "int: " << rhs.getI() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "int: " << e.what() << std::endl;
    }
    cout << std::fixed << std::setprecision(1); // Precision = 1
    cout << "float: " << rhs.getF() << 'f' << std::endl;
    cout << "double: " << rhs.getD() << std::endl;
    return (cout);
}

void    Conversion::Cconversion(std::string string)
{
    this->_c = static_cast<char>(string[0]);
    this->_i = static_cast<int>(this->_c);
    this->_f = static_cast<float>(this->_c);
    this->_d = static_cast<double>(this->_c);
}

void    Conversion::Iconversion(std::string string)
{
    sscanf(string.c_str(), "%d", &this->_i); 
    this->_c = static_cast<char>(this->_i);
    this->_f = static_cast<float>(this->_i);
    this->_d = static_cast<double>(this->_i);
}

void    Conversion::Dconversion(std::string string)
{
    sscanf(string.c_str(), "%lf", &this->_d); 
    this->_c = static_cast<char>(this->_d);
    this->_i = static_cast<int>(this->_d);
    this->_f = static_cast<float>(this->_d);
}

void    Conversion::Fconversion(std::string string)
{
    sscanf(string.c_str(), "%f", &this->_f); 
    this->_c = static_cast<char>(this->_f);
    this->_i = static_cast<int>(this->_f);
    this->_d = static_cast<double>(this->_f);
}

void    Conversion::conversion(std::string string)
{
    if (this->_type == "char")
        Cconversion(string);
    else if (this->_type == "int")
        Iconversion(string);
    else if (this->_type == "double")
        Dconversion(string);
    else
        Fconversion(string);
}

const char    *Conversion::NotValidConversion::what() const throw ()
{
    return("not a valid conversion");
}

const char  *Conversion::ImpossibleConversion::what() const throw ()
{
    return ("impossible");
}