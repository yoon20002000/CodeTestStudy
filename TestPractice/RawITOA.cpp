#include "RawITOA.h"

#include <iostream>

RawITOA::RawITOA(int num)
{
    solution3(num);
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

char* RawITOA::solution2(int integer)
{
    bool isNegative = integer < 0;

    if (isNegative)
    {
        integer = -integer;
    }

    int length = 0;
    int temp = integer;
    while (temp != 0)
    {
        temp /= 10;
        ++length;
    }
    // 0 번은 음수일 경우 고정 즉 시작점 관리하는 index 필요
    // 끝은 null 고정 그 앞까지 해야됨

    char* result = new char[length + (isNegative == true ? 1 : 0) + 1];
    result[length + (isNegative ? 1 : 0)] = '\0';

    int index = length + (isNegative ? 1 : 0) - 1;

    for (int i = 0; i < length; ++i)
    {
        int num = integer % 10;
        char numChar = num + '0';
        integer /= 10;
        result[index - i] = numChar;
    }

    if (isNegative == true)
    {
        result[0] = '-';
    }
    return result;
}

void RawITOA::solution3(int num)
{
    bool isNegative = num < 0;
    if (isNegative)
    {
        num =-num;
    }

    size_t length = 0;
    int temp = num;
    while (temp != 0)
    {
        ++length;
        temp /= 10;
    }

    char* buffer = new char [length + (isNegative ? 1 : 0) + 1];
    buffer[length + (isNegative ? 1 : 0)] = '\0';
    if(isNegative)
    {
        buffer[0] = '-';
    }

    int index = length + (isNegative ? 1 : 0) - 1; 
    while (num!=0)
    {
        int tempValue = num %10;
        char tempChar = tempValue + '0';
        buffer[index] = tempChar;
        --index;
        num /= 10;
    }
    std::cout << buffer << std::endl;
    delete[] buffer;
}

void RawITOA::solution4(int integer, char* buf, int buf_size, int numberType)
{
    if(buf_size == 0)
    {
        return;
    }
    if(buf == nullptr)
    {
        return;
    }
    if(numberType == 0)
    {
        return;
    }
    int length = 0;
    int temp = integer;
    while (temp!=0)
    {
        ++length;
        temp/=10;
    }
    
    bool isNegative = integer < 0;
    if (length + 1 + (isNegative ? 1 : 0) > buf_size)
    {
        return ;
    }

    buf[length + (isNegative ? 1 : 0)] ='\0';
    if (isNegative)
    {
        integer = -integer;
        buf[0] = '-';
    }
    int index = length + (isNegative ? 1 : 0) - 1;
    while(integer != 0)
    {
        int num = integer % 10;
        char numChar = num + '0';
        buf[index--] = numChar;

        integer /= 10;
    }
}
