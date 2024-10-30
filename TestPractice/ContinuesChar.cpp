#include "ContinuesChar.h"

ContinuesChar::ContinuesChar(const char* str)
{
    solution(str);
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
