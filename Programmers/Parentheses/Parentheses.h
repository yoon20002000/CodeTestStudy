#pragma once
#include <vector>
using namespace std;
class Parentheses
{
public:
    int solution(int num);
    int checkParentheses(int open, int close);
    int solutionDP(int num);
    int checkParenthesesDP(int open, int close, vector<vector<int>>& dp);
};
