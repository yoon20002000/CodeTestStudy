#include "SumOfContinues.h"

SumOfContinues::SumOfContinues(int num, int total)
{
}

vector<int> SumOfContinues::solution(const int num, const  int total)
{
    vector<int> answer;
    answer.reserve(num);
    const int x = static_cast<int>(static_cast<float>(total) / static_cast<float>(num) - (static_cast<float>(num) / 2) +
        0.5f);
    
    for(int i = 0 ; i < num ; ++i)
    {
        answer.push_back(x + i);
    }
    
    return answer;
}
