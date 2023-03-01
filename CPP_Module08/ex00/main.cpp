/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:15:07 by hdony             #+#    #+#             */
/*   Updated: 2022/12/09 10:50:04 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

const char  *easyfindException::what() const throw ()
{
    return("No occurrence found");
}

int	main(void) {
	std::cout << "+++ Testing int array +++" << std::endl;
	try {
	std::array<int, 4>	ar = {11, 22, 33, 44};
	int	*f;
	int	tofind;

	std::cout << "Array: ";
	for (int i = 0; i < 4; i++) {
		std::cout << ar[i];
		if (i < 3)
			std::cout << ", ";
		else
			std::cout << std::endl;
	}
	tofind = 44;
	std::cout << "To find: " << tofind << std::endl;
	std::cout << "Found: ";
	f = easyfind(ar, tofind);
	std::cout << *f << std::endl;
	tofind = 55;
	std::cout << "To find: " << tofind << std::endl;
	std::cout << "Found: ";
	f = easyfind(ar, tofind);
	std::cout << *f << std::endl;
	std::cout << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "+++ Testing int vector +++" << std::endl;
	try {
	std::vector<int>			vct;
	std::vector<int>::iterator	f;
	int							tofind;

	for (int i = 0; i < 4; i++) {
		vct.push_back(i + 1);
	}
	std::cout << "Vector: ";
	for (int i = 0; i < 4; i++) {
		std::cout << vct[i];
		if (i < 3)
			std::cout << ", ";
		else
			std::cout << std::endl;
	}
	tofind = 3;
	std::cout << "To find: " << tofind << std::endl;
	std::cout << "Found: ";
	f = easyfind(vct, tofind);
	std::cout << *f << std::endl;
	tofind = 5;
	std::cout << "To find: " << tofind << std::endl;
	std::cout << "Found: ";
	f = easyfind(vct, tofind);
	std::cout << *f << std::endl;
	std::cout << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "+++ Testing list +++" << std::endl;
	try {
	std::list<int>				lst (5, 7);
	std::list<int>::iterator	it;
	std::list<int>::iterator	f;
	int							tofind;

	std::cout << "List: ";
	for (it = lst.begin(); it != lst.end(); it++) {
		std::cout << *it;
		if (it != lst.end())
			std::cout << ", ";
		else
			std::cout << std::endl;
	}
	std::cout << std::endl;
	tofind = 7;
	std::cout << "To find: " << tofind << std::endl;
	std::cout << "Found: ";
	f = easyfind(lst, tofind);
	std::cout << *f << std::endl;
	tofind = 5;
	std::cout << "To find: " << tofind << std::endl;
	std::cout << "Found: ";
	f = easyfind(lst, tofind);
	std::cout << *f << std::endl;
	std::cout << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}