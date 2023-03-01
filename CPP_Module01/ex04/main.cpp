/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:19:45 by hdony             #+#    #+#             */
/*   Updated: 2022/11/10 11:07:53 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(int argc, char *argv[])
{
    /*input file stream object*/
    std::ifstream   existing_file;
    std::ofstream   to_be_file;
    std::string     file_name;
    std::string     out_file_name;
    std::string     get;
    int             ret;

    if (argc != 4)
    {
        std::cout << "Enter 4 arguments" << std::endl;
        return (1);
    }
    else if (std::strcmp(argv[1], "") == 0 || std::strcmp(argv[2], "") == 0 || std::strcmp(argv[3], "") == 0)
    {
        std::cout << "No empty args" << std::endl;
        return (1);
    }
    file_name = argv[1];
    out_file_name = std::string(argv[1]).append(".replace");
    ret = 0;
    existing_file.open(file_name);
    to_be_file.open(out_file_name);
    if (to_be_file.fail() || existing_file.fail())
    {
        std::cout << "file could not be opened." << std::endl;
        return (0);
    }
    while (getline(existing_file, get))
    {
       if ( (ret = get.find(argv[2], 0)) != -1)
       {
           get.erase(ret, std::string(argv[2]).size());
           get.insert(ret , argv[3]);
       }
       while ( (ret = get.find(argv[2], ret + std::string(argv[2]).size())) != -1)
       {
           get.erase(ret, std::string(argv[2]).size());
           get.insert(ret , argv[3]);
       }
       to_be_file << get << std::endl;
    }
    existing_file.close();
    to_be_file.close();
    return (0);
}