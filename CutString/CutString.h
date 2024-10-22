#pragma once
#include <vector>
#include <string>
using namespace std;
class CutString
{
public:
    CutString(string inputString, int cutLength);
private:
    vector<string> solution(const string& input, int cutLength);
};
