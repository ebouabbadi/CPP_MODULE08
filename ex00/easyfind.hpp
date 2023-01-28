/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:01:12 by ebouabba          #+#    #+#             */
/*   Updated: 2023/01/28 17:01:12 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <map>

template <typename T>
void easyfind(T ConTainEr, int n)
{
    typename T::iterator it = ConTainEr.begin();
    typename T::iterator it1 = ConTainEr.end();
    for (; it != it1; it++)
    {
        if (*it == n)
        {
            std::cout <<n<< " Found";
            return ;
        }
    }
    throw(n);
}
#endif