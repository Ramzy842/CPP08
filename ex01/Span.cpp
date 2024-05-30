/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:54:05 by rchahban          #+#    #+#             */
/*   Updated: 2024/05/27 00:17:27 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Span.hpp"


Span::Span() : N(0), numbers(0)
{
	// std::cout << "Span default constructor called" << std::endl;
}

Span::Span(unsigned int _N) : N(_N), numbers(std::vector<int>())
{
	// std::cout << "Span parametrized constructor called" << std::endl;
}
Span::~Span()
{
	// std::cout << "Span destructor called" << std::endl;
}
Span::Span(const Span& original) :N(original.N),  numbers(original.numbers)
{
	// std::cout << "Span copy constructor called" << std::endl;
}
Span& Span::operator=(const Span& original)
{
	if (this != &original)
	{
		this->N = original.N;
		this->numbers = original.numbers;
	}
	// std::cout << "Span copy assignment operator called" << std::endl;
	return *this;
}

void Span::addNumber(int num)
{
	if (numbers.size() == N) {
      throw std::out_of_range("Span is already full");
    }
    numbers.push_back(num);
}

void Span::addNumbers(std::vector<int> nums)
{
	if (nums.size() > N) {
		throw std::out_of_range("Span cannot hold that many elements");
	}
	numbers.insert(numbers.end(), nums.begin(), nums.end());
}
int Span::shortestSpan()
{
	if (numbers.size() < 2) {
      throw std::out_of_range("Need at least 2 numbers for a span");
    }
    std::vector<int> sortedData(numbers);
    std::sort(sortedData.begin(), sortedData.end());
    int minSpan = sortedData[N - 1];
    for (unsigned int x = 1; x < sortedData.size(); x++) {
		minSpan = std::min(minSpan, sortedData[x] - sortedData[x - 1]);
    }
    return minSpan;
}

int Span::longestSpan()
{
	if (numbers.size() < 2) {
      throw std::out_of_range("Need at least 2 numbers for a span");
    }
    std::vector<int> sortedData(numbers);
    std::sort(sortedData.begin(), sortedData.end());
    return sortedData.back() - sortedData.front();
}