#include "ShiftString.h"

ShiftString::ShiftString(string& input, string& target)
{
    solution(input, target);
}

int ShiftString::solution(string& input, string& target)
{
    int answer = 0;

    char first = input[0];
    size_t length = input.length();
    vector<int> findIndexs;
    findIndexs.reserve(length);
    
    for(int i = 0 ; i < length; ++i)
    {
        if(first == target[i])
        {
            findIndexs.push_back(i);
        }
    }

    for(int findIndex : findIndexs)
    {
        // % length 하면 됨
        bool isMatch = true;
        for(int i = 0 ; i < length; ++i)
        {
            int targetPivot = (findIndex + i) % length;
            if(target[targetPivot] != input[i])
            {
                continue;
            }
        }
        if(isMatch)
        {
            return findIndex;
        }
    }

    
    
    return answer;
}
