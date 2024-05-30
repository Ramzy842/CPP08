/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:54:07 by rchahban          #+#    #+#             */
/*   Updated: 2024/05/27 00:17:31 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <vector>

class Span {
	private:
		unsigned int N;
		std::vector<int> numbers;
	public:
		Span();
		Span(unsigned int _N);
		~Span();
		Span(const Span& original);
		Span& operator=(const Span& original);
		void addNumber(int num);
		void addNumbers(std::vector<int> nums);
		int shortestSpan();
		int longestSpan();
};

#endif