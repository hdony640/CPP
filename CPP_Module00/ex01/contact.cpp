/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:58:11 by hdony             #+#    #+#             */
/*   Updated: 2022/11/07 15:55:08 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

const std::string Contact::_field_names[5] = 
{
    "First Name: ",
	"Last Name: ",
	"Nickname: ",
    "Phone Number: ",
    "Darkest Secret: "
};

std::string Contact::check_field(std::string field) const
{
    while (field.size() == 0)
    {
        std::cout << "Field cannot be empty" << std::endl;
        std::getline(std::cin, field);
    }
    return (field);
}

std::string Contact::check_phone(std::string phone) const
{
    int i;

    i = -1;
    while (phone[++i])
    {
        while (!isdigit(phone[i]))
        {
            std::cout << "Only digits in phone number" << std::endl;
            std::getline(std::cin, phone);
        }
    }
    return (phone);
}

void    Contact::add_info(void)
{
    std::cout << this->_field_names[0];
    std::getline(std::cin, this->_contact_info[0]);
    this->_contact_info[0] = check_field(this->_contact_info[0]);
    std::cout << this->_field_names[1];
    std::getline(std::cin, this->_contact_info[1]);
    this->_contact_info[1] = check_field(this->_contact_info[1]);
    std::cout << this->_field_names[2];
    std::getline(std::cin, this->_contact_info[2]);
    this->_contact_info[2] = check_field(this->_contact_info[2]);
    std::cout << this->_field_names[3];
    std::getline(std::cin, this->_contact_info[3]);
    this->_contact_info[3] = check_field(this->_contact_info[3]);
    this->_contact_info[3] = check_phone(this->_contact_info[3]);
    std::cout << this->_field_names[4];
    std::getline(std::cin, this->_contact_info[4]);
    this->_contact_info[4] = check_field(this->_contact_info[4]);
    std::cout << "Contact added" << std::endl;
}

void    Contact::display_info(int index) const
{
    int i;

    i = -1;
    std::cout << "|" << std::setw(10) << index;
    while (++i < 3)
    {
        std::cout << "|";
        if (this->_contact_info[i].size() > 10)
        {
            std::cout << this->_contact_info[i].substr(0,9) << ".";
        }
        else
            std::cout << std::setw(10) << this->_contact_info[i];
    }
    std::cout << "|" << std::endl;
}

void    Contact::display_specific_info(void) const
{
    int i;

    i = -1;
    while (++i < 5)
    {
        std::cout << this->_field_names[i]; 
        std::cout << this->_contact_info[i] << std::endl; 
    }
}
