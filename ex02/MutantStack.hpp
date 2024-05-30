/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:55:03 by rchahban          #+#    #+#             */
/*   Updated: 2024/05/26 02:07:49 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack()
		{}
		~MutantStack()
		{}
		MutantStack(const MutantStack& original) : std::stack<T>(original){
			return ;
		}
		MutantStack<T>& operator=(const MutantStack& original)
		{
			if (this != &original)
				std::stack<T>::operator=(original);
			return *this;
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() {
        	return std::stack<T>::c.begin();
    	}
    	iterator end() {
        	return std::stack<T>::c.end();
    	}
};

#endif