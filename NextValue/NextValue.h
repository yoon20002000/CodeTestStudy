#pragma once
#include <vector>

using namespace std;

class NextValue
{
public:
    NextValue(const vector<int>& inputValues);

private:
    int solution(const vector<int>& inputValues);
};
