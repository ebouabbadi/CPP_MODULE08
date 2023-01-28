/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:01:49 by ebouabba          #+#    #+#             */
/*   Updated: 2023/01/28 17:01:49 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span abdo(4);
    try
    {
        abdo.addNumber(-12);
        abdo.addNumber(98);
        abdo.addNumber(21);
        abdo.addNumber(2);
        abdo.addNumber(2);
        std::cout << abdo.longestSpan() << std::endl;
        std::cout << abdo.shortestSpan() << std::endl;
    }
    catch (const char *s)
    {
        std::cout << s << std::endl;
    }
}