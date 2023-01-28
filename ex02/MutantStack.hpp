/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:02:30 by ebouabba          #+#    #+#             */
/*   Updated: 2023/01/28 17:31:33 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack(){};
    ~MutantStack(){};
    MutantStack(MutantStack<T> &c)
    {
        *this = c;
    }
    MutantStack<T> &operator=(MutantStack<T> &c)
    {
        this->c = c.c;
        return (*this);
    }
    typedef typename std::deque<T>::iterator iterator;
    typename std::deque<T>::iterator begin()
    {
        return (this->c.begin());
    }
    typename std::deque<T>::iterator end()
    {
        return (this->c.end());
    }
};

#endif