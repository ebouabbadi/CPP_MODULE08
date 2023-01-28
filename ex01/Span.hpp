/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:02:00 by ebouabba          #+#    #+#             */
/*   Updated: 2023/01/28 17:02:00 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <stdlib.h>
#include <vector>

class Span
{
private:
    unsigned int N;
    std::vector<int> vect;

public:
    Span();
    Span(unsigned int N);
    Span(const Span &c);
    Span &operator=(const Span &c);
    int operator[](unsigned int index);
    void addNumber(int Number);
    int longestSpan();
    int shortestSpan();
    ~Span();
};

#endif