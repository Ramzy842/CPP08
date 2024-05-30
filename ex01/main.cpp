/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:52:35 by rchahban          #+#    #+#             */
/*   Updated: 2024/05/27 00:41:17 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Span.hpp"

int main()
{
	Span sp = Span(5);

	// Assignment Example
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	// Using Range of iterators
	// Span sp = Span(10000);
  	// int numbers[10000];

  	// for (int i = 0; i < 9998; i++) {
	// 	numbers[i] = i * 2;
 	// }
	// numbers[9998] = 145;
	// numbers[9999] = 20000;
	// std::vector<int> v(numbers, numbers + sizeof(numbers) / sizeof(numbers[0]));
	// sp.addNumbers(v);
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
	return 0;
}