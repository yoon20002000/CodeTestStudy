#include "RawATOI.h"

#include <cctype>
#include <iostream>

RawATOI::RawATOI(char* str)
{
	/*std::cout << solution(str);*/
    std::cout << solution1(str);
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

int RawATOI::solution1(char* intChars)
{
    int result = 0;

    size_t length = strlen(intChars);
    bool isNegative = false;

    if (intChars[0] == '-')
    {
        isNegative = true;
    }

    int index = isNegative ? 1 : 0;
    for (int i = 0; i < length; ++index, ++i)
    {
        if (intChars[index] >= '0' && intChars[index] <= '9')
        {
            result = result * 10 + (intChars[index] - '0');
        }
    }

    return result * (isNegative == true ? -1 : 1);
}
