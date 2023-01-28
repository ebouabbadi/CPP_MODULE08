#include "Span.hpp"


int main(int ac, char **av)
{
    if (ac < 2)
        return (0);
    Span abdo(10);
    for (size_t i = 0; av[i]; i++)
    {
        abdo.addNumber(atoi(av[i]));
    }
    for (size_t i = 0; i < ac; i++)
    {
        std::cout<<abdo[i]<<std::endl;
    }
    return (0);
}