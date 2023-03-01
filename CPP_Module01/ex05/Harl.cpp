/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:34:14 by hdony             #+#    #+#             */
/*   Updated: 2022/11/07 13:11:43 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{};

Harl::~Harl()
{};

void    Harl::complain(std::string input)
{
   void    (Harl::*fct[4])(void) = {&Harl::_debug, &Harl::_info, 
    &Harl::_warning, &Harl::_error};
   std::string  levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
   int  i;

   i = -1;
   while (++i < 4)
   {
       if (input == levels[i])
        (this->*fct[i])();
   }
}

void    Harl::_debug(void)
{
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup"
     << "burger. I really do!" << std::endl;
}
void    Harl::_info(void)
{
    std::cout << "INFO: I cannot believe adding extra bacon costs more money." <<
        "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void    Harl::_warning(void)
{
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for" <<
        "years whereas you started working here since last month." << std::endl;
}
void    Harl::_error(void)
{
    std::cout <<  "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}