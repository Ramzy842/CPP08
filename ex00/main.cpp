/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:52:35 by rchahban          #+#    #+#             */
/*   Updated: 2024/05/27 00:14:56 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./easyfind.hpp"

int main()
{
	std::list<int> myList;
	myList.push_back(20);
	myList.push_back(10);
	myList.push_back(32);
	myList.push_front(72);
	if (myList.empty())
	{
		std::cout << "List is empty" << std::endl;
		return 0;
	}
	try {
		easyfind(myList, 3);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		easyfind(myList, 10);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		easyfind(myList, -100);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}