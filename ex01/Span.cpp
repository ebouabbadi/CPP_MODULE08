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
        std::cout << "this finish\n";
    this->vect.push_back(Number);
}
int Span::operator[](int index)
{
    if (index >= this->vect.size())
        std::cout << "problem\n";
    return (this->vect[index]);
}

int Span::longestSpan()
{
    int max;
    int min;
    std::vector<int>::iterator it_end = this->vect.end();
    std::vector<int>::iterator it_begin = this->vect.begin();
    for (; it_begin != it_end; it_begin++)
    {
        
    }
}