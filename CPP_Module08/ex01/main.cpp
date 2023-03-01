/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:15:07 by hdony             #+#    #+#             */
/*   Updated: 2022/12/12 11:47:32 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span	test_1(10);
	Span	test_2(0);
	Span	test_3(10000);
	Span	test_4(test_1);
	Span	test_5 = test_4;
	
	std::cout << "----ADD NUMBER----" << std::endl;

	try 
	{
		test_4.addNumber(1);
		test_4.addNumber(2);
		test_4.addNumber(3);
		std::cout << test_4;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try 
	{
		test_5.addNumber(1);
		test_5.addNumber(2);
		test_5.addNumber(3);
		std::cout << test_5;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try 
	{
		test_1.addNumber(13);
		test_1.addNumber(500);
		test_1.addNumber(10);
		test_1.addNumber(56);
		test_1.addNumber(11);
		std::cout << test_1;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try 
	{
		test_2.addNumber(13);
		test_2.addNumber(500);
		test_2.addNumber(10);
		test_2.addNumber(56);
		test_2.addNumber(11);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "----MULTI ADDS---" << std::endl;
	std::vector<int>	tab_test;		

	for (int i = 0; i < 10; i++)
	{
		tab_test.push_back(i);
	}
	std::vector<int>::iterator			start_tab = tab_test.begin();
	std::vector<int>::iterator			end_tab  = tab_test.end();
	try 
	{
		test_3.addNumber(start_tab, end_tab);
		std::cout << test_3;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "----SHORTEST----" << std::endl;

	try
	{
		std::cout << "shortest on test_1: " << test_1.shortestSpan() << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "----LONGUEST----" << std::endl;

	try
	{
		std::cout << "longest on test_1: " << test_1.longestSpan() << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	return (0);
}