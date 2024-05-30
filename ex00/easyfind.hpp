/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:52:39 by rchahban          #+#    #+#             */
/*   Updated: 2024/05/27 00:15:04 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_HPP
# define EASY_HPP

#include <iostream>
#include <list>
#include <algorithm> 


class ElementNotFound : public std::exception
{
	virtual const char* what() const throw();
};

template <typename T>
void easyfind(T& list, int second)
{
	if (std::find(list.begin(), list.end(), second) != list.end())
    	std::cout << "Found " << second << " in the list." << std::endl;
  	else
    	throw ElementNotFound();
}
const char* ElementNotFound::what() const throw()
{
	return "Error: Element couldn't be found in the list.";
}

#endif