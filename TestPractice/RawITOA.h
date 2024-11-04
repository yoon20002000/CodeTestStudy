#pragma once

class RawITOA
{
public:
    RawITOA(int num);
    void solution4(int integer, char *buf, int buf_size, int radix);
private:
    char* solution(int num);
    char* solution1(int num);
    char* solution2(int integer);
    void solution3(int num);
    
};
