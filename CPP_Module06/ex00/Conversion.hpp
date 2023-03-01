/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:28:14 by hdony             #+#    #+#             */
/*   Updated: 2022/12/01 10:46:13 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_CLASS
# define CONVERSION_CLASS

# include <string>
# include <iostream>
# include <iomanip>
# include <limits.h>
# include <cctype>
# include <cmath>

class Conversion
{
private:
    std::string _string;
    std::string _type;
    char        _c;
    int         _i;
    float       _f;
    double      _d;

public:
    Conversion();
    Conversion(std::string string);
    Conversion(const Conversion& rhs);
    ~Conversion();

    Conversion  &operator=(const Conversion& rhs);
    void        parsing(std::string string);
    void        conversion(std::string string);
    void        Cconversion(std::string string);
    void        Iconversion(std::string string);
    void        Dconversion(std::string string);
    void        Fconversion(std::string string);
    std::string getString() const;
    std::string getType() const;
    char        getC() const;
    int         getI() const;
    float       getF() const;
    double      getD() const;
    operator    char();

    class   NotValidType: public std::exception
    {
        public:
            const char* what() const throw();
    };
    class   NotValidConversion: public std::exception
    {
        public:
            const char* what() const throw();
    };
    class   ImpossibleConversion: public std::exception
    {
        public:
            const char* what() const throw();
    };
};
std::ostream&   operator<<(std::ostream& cout, const Conversion& rhs);

#endif