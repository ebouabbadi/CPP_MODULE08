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
    int operator[](int index);
    void addNumber(int Number);
    int longestSpan();
    ~Span();
};

#endif