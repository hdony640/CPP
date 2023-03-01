/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone1.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:06:31 by hdony             #+#    #+#             */
/*   Updated: 2022/10/27 16:46:52 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
    int i;
    int j;

    i = 0;
    j = 1;
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (j < argc)
    {
        while (argv[j][i])
            std::cout << static_cast<char>( toupper(argv[j][i++]) );
        i = 0;
        j++;
    }
	std::cout << std::endl;
	return (0);
}