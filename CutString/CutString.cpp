#include "CutString.h"

CutString::CutString(string inputString, int cutLength)
{
    solution(inputString, cutLength);
}

vector<string> CutString::solution(const string& input, const int cutLength)
{
    vector<string> answer;

    answer.reserve(input.length());
    for (int i = 0; i < input.length(); i += cutLength)
    {
        answer.push_back(input.substr(i, cutLength));
    }

    return answer;
}
