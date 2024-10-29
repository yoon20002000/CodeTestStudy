#include "RawITOA.h"

#include <iostream>

RawITOA::RawITOA(int num)
{
    std::cout<< solution1(num);
}

char* RawITOA::solution(int num)
{
    bool isNegative = num < 0;

    if (isNegative)
    {
        num = -num;
    }

    int length = 0;
    int temp = num;
    while (temp != 0)
    {
        temp /= 10;
        length++;
    }
    int i = 0;

    char* result = new char[length + (isNegative ? 1 : 0) + 1];
    if(isNegative)
    {
        result[i] = '-';
    }
    
    for(; i < length; ++i)
    {
        result[length - i - 1 + (isNegative ? 1 : 0)] = num % 10 + '0';
        num /= 10;
    }
    result[length + (isNegative ? 1 : 0)] = '\0';
    return result;
}

char* RawITOA::solution1(int num)
{
    bool isNegative = num < 0;
    num = abs(num);  // 음수 처리

    int temp = num;
    int length = (num == 0) ? 1 : 0;  // num이 0인 경우 자리수를 1로 설정
    while (temp != 0) {
        temp /= 10;
        length++;
    }

    // 부호 자리 포함해 메모리 할당, +1은 null 종료 문자
    char* result = new char[length + (isNegative ? 1 : 0) + 1];
    
    int i = length + (isNegative ? 1 : 0) - 1;
    result[i + 1] = '\0';  // null 종료

    // 숫자를 역순으로 저장
    while (i >= (isNegative ? 1 : 0)) {
        result[i--] = (num % 10) + '0';
        num /= 10;
    }

    if (isNegative) {
        result[0] = '-';
    }

    return result;
}
