/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:01:39 by hdony             #+#    #+#             */
/*   Updated: 2022/11/07 13:25:10 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

int main()
{
    Phonebook        PhonebookI;
    bool             run;
    std::string      cmd;
    std::string      input[3] = {"ADD", "SEARCH", "EXIT"};
    std::cout << "Please enter one of the following command: ADD, SEARCH, EXIT" << std::endl;
    run = true;
    while (run)
    {
        std::cout << "> ";
        std::getline(std::cin, cmd);
        if (input[0].compare(cmd) == 0)
            PhonebookI.add_contact();
        else if (input[1].compare(cmd) == 0)
            PhonebookI.search_contact();
        else if (input[2].compare(cmd) == 0)
            run = false;
        else
            std::cout << "You entered a wrong input" << std::endl;
    }
    return (0);
}