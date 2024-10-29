#include "RawATOI.h"

#include <cctype>
#include <iostream>

RawATOI::RawATOI(char* str)
{
    std::cout<< solution(str);
}

int RawATOI::solution(char* str)
{
    int result = 0;
    // 부호 확인용
    int sign = 1;
            
    if(*str == '-')
    {
        sign = -1;
        ++str;
    }
    else if(*str == '+')
    {
        ++str;
    }

    while (*str != NULL && isdigit(*str))
    {
        // ascii에서 0 시작점 만큼 빼면 됨 isdigit으로 설정 했기 때문에 가능.
        // 그리고 반복 할 수록 자리수를 하나씩 올려야 되기 때문에 * 10
        result = result * 10 + (*str - '0');
        ++str;
    }

    return sign * result;
}
