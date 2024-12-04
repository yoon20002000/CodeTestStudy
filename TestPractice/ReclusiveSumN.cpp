#include "ReclusiveSumN.h"

#include <iostream>

ReclusiveSumN::ReclusiveSumN(const int n)
{
    std::cout <<  solution(n) << std::endl;
}

int ReclusiveSumN::solution(const int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n + solution(n-1);
    }
}
