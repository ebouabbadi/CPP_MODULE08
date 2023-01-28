/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:02:15 by ebouabba          #+#    #+#             */
/*   Updated: 2023/01/28 17:02:15 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        exit(0);
    std::vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(8);
    vec.push_back(9);
    try
    {
        easyfind(vec, atoi(av[1]));
        std::cout<<" <vector>\n";
    }
    catch (int n)
    {
        std::cout << n << " Not Found <vector>\n";
    }
    std::list<int> lis;
    lis.push_front(-1);
    lis.push_front(-23);
    lis.push_front(-2);
    try
    {
        easyfind(lis, atoi(av[1]));
        std::cout<<" <list>\n";
    }
    catch (int n)
    {
        std::cout << n << " Not Found <list>\n";
    }
    return (0);
}
