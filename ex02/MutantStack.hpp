/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:02:30 by ebouabba          #+#    #+#             */
/*   Updated: 2023/01/29 09:37:23 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::deque<T>::iterator iterator;
    MutantStack(){};
    ~MutantStack(){};
    MutantStack(MutantStack<T> &copy)
    {
        *this = copy;
    }
    MutantStack<T> &operator=(MutantStack<T> &copy)
    {
        this->c = copy.c;
        return (*this);
    }
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