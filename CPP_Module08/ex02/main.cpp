/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:15:07 by hdony             #+#    #+#             */
/*   Updated: 2022/12/12 11:42:29 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

/* Top(): Returns a reference to the top element in the stack. 
** Pop() : Removes the element on top of the stack, effectively reducing its size by one.
*/

int	main(void) {

std::cout << "< REGULAR ITERATOR >" << std::endl;
MutantStack<int> stack1;

std::cout << "Push(5) " << std::endl;
std::cout << "Push(17) " << std::endl;
stack1.push(5);
stack1.push(17);

std::cout << "Top(): " << stack1.top() << std::endl;
std::cout << "Pop()" << std::endl;
stack1.pop();
MutantStack<int>::iterator it1 = stack1.begin();
MutantStack<int>::iterator ite1 = stack1.end();
std::cout << "Stack container size: " << stack1.size() << std::endl;
for (; it1 != ite1; it1++)
	std::cout << *it1 << std::endl;
	

std::cout << "< REVERSE ITERATOR >" << std::endl;
MutantStack<int> stack2;
std::cout << "Push(3) " << std::endl;
stack2.push(3);
std::cout << "Push(5) " << std::endl;
stack2.push(5);
std::cout << "Push(737) " << std::endl;
stack2.push(737);
std::cout << "Push(0) " << std::endl;
stack2.push(0);
MutantStack<int>::r_iterator it2 = stack2.rbegin();
// std::cout << "*ite: " << *ite << std::endl;
MutantStack<int>::r_iterator ite2 = stack2.rend();
// std::cout << "*itee: " << *--itee << std::endl;
for (; it2 != ite2; ++it2)
	std::cout << ' ' << *it2;
std::cout << std::endl;

std::cout << "< CONST ITERATOR >" << std::endl;
MutantStack<int> stack3;
std::cout << "Push(0) " << std::endl;
stack3.push(0);
std::cout << "Push(1) " << std::endl;
stack3.push(1);
std::cout << "Push(2) " << std::endl;
stack3.push(2);
std::cout << "Push(3) " << std::endl;
stack3.push(3);
// MutantStack<int>::c_iterator it3 = stack3.cbegin();
// MutantStack<int>::c_iterator ite3 = stack3.cend();
// for (; it3 != ite3; ++it3)
// 	std::cout << *it3 << std::endl;
for (MutantStack<int>::c_iterator it3 = stack3.cbegin(); it3 != stack3.cend(); ++it3)
    std::cout << ' ' << *it3;
  std::cout << '\n';

std::list<int>	lst;
for (int i = 0; i < 4; i++)
	lst.push_back(i);
for (std::list<int>::iterator lstit = lst.begin(); lstit != lst.end(); lstit++)
    std::cout << ' ' << *lstit;
  std::cout << '\n';

std::cout << "< REVERSE CONST ITERATOR >" << std::endl;
MutantStack<int> stack4;
std::cout << "Push(1) " << std::endl;
stack4.push(1);
std::cout << "Push(2) " << std::endl;
stack4.push(2);
std::cout << "Push(3) " << std::endl;
stack4.push(3);
std::cout << "Push(4) " << std::endl;
stack4.push(4);
MutantStack<int>::c_r_iterator it4 = stack4.crbegin();
MutantStack<int>::c_r_iterator ite4 = stack4.crend();
for (; it4 != ite4; ++it4)
		std::cout << ' ' << *it4;
std::cout << std::endl;
return (0);
}