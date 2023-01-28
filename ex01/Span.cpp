/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:01:56 by ebouabba          #+#    #+#             */
/*   Updated: 2023/01/28 17:01:56 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    this->N = 0;
}

Span::Span(unsigned int N)
{
    this->N = N;
}

Span::Span(const Span &c)
{
    *this = c;
}

Span &Span::operator=(const Span &c)
{
    this->N = c.N;
    return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int Number)
{
    if (this->vect.size() == this->N)
        throw "this finish";
    this->vect.push_back(Number);
}
int Span::operator[](unsigned int index)
{
    if (index >= this->vect.size())
        throw "problem";
    return (this->vect[index]);
}

int Span::longestSpan()
{
    if (this->vect.size() < 2)
        throw("problem");
    std::vector<int>::iterator it = this->vect.begin();
    std::vector<int>::iterator it_end = this->vect.end();
    int max = *it;
    int min = *it;
    for (; it != it_end; it++)
    {
        if (*it > max)
            max = *it;
        if (*it < min)
            min = *it;
    }
    return (max - min);
}

int Span::shortestSpan()
{
    if (this->vect.size() < 2)
        throw("problem");
    std::vector<int>::iterator it0 = this->vect.begin();
    std::vector<int>::iterator it;
    std::vector<int>::iterator it_end = this->vect.end();
    int ShorTest = std::abs(*it0 - *(it0 + 1));
    while (it0 != it_end)
    {
        it = it0;
        it++;
        for (; it != it_end; it++)
        {
            if (std::abs(*it - *it0) < ShorTest)
                ShorTest = std::abs(*it - *it0);
        }
        it0++;
    }
    return (ShorTest);
}