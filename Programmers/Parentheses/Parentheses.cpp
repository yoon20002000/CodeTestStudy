#include "Parentheses.h"

#include <iostream>
#include <ostream>

int Parentheses::solution(int num)
{
    return checkParentheses(num, num);
}

int Parentheses::checkParentheses(int open, int close)
{
    cout << " " ;
    cout << "open : " << open << " close : " << close << " /" ;
    
    if (open == 0 && close == 0)
    {
        return 1;
    }
    if (open > close)
    {
        return 0;
    }

    int result = 0;
    if (open > 0)
    {
        
        result += checkParentheses(open - 1, close);
    }
    if (close > 0)
    {
        
        result += checkParentheses(open, close - 1);
    }
    cout << endl;
    return result;
}

int Parentheses::solutionDP(int num)
{
    static vector<vector<int>> dp(14 + 1, vector<int>(14 + 1, -1));
    int result =  checkParenthesesDP(num, num, dp);
    return result;
}

int Parentheses::checkParenthesesDP(int open, int close, vector<vector<int>>& dp)
{
    if (dp[open][close] != -1)
    {
        return dp[open][close];
    }

    if (open == 0 && close == 0)
    {
        return 1;
    }
    if (open > close)
    {
        return 0;
    }

    int result = 0;
    if (open > 0)
    {
        result += checkParentheses(open - 1, close);
    }
    if (close > 0)
    {
        result += checkParentheses(open, close - 1);
    }

    dp[open][close] = result;
    return result;
}
