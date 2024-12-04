#include "NextValue.h"

NextValue::NextValue(const vector<int>& inputValues)
{
    solution(inputValues);
}

int NextValue::solution(const vector<int>& inputValues)
{
    int sub = inputValues[1] - inputValues[0];

    if (inputValues[2] == inputValues[1] + sub)
    {
        return inputValues.back() + sub;
    }
    else
    {
        sub = inputValues[1] / inputValues[0];
        return inputValues.back() * sub;
    }
}
