#include "ContinuesChar.h"

#include <iostream>
#include <ostream>

ContinuesChar::ContinuesChar(const char* str)
{
    std::cout<< solution2(str)<<std::endl;
}

int ContinuesChar::solution(const char* str)
{
    int maxCount = 1;
    int curCount = 1;
    char curChar = str[0];
    ++str;
    while (*str != '\0')
    {
        if(curChar == *str)
        {
            ++curCount;
        }
        else
        {
            curChar = *str;
            curCount = 1;
        }

        if(curCount> maxCount)
        {
            maxCount = curCount;
        }
        
        ++str;
    }
    return maxCount;
}

int ContinuesChar::solution2(const char* str)
{
    int maxCount = 1;
    int curCount = 1;
    char curChar = str[0];

    do
    {
        ++str;
        if(curChar == *str)
        {
            ++curCount;
        }
        else
        {
            curChar = *str;
            curCount = 1;
        }

        if(maxCount < curCount)
        {
            maxCount = curCount;
        }
    }
    while(*str!='\0');

    return maxCount;
}
