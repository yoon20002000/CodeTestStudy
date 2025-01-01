#include "NExpression.h"

#include <set>
#include <string>
#include <vector>

using namespace std;

int NExpression::solution(int n, int number)
{
    
    vector<set<int>> dp(8);

    for (int i = 1 ; i <= dp.size(); ++i)
    {
        int defaultNum = stoi(string(i,'0' + n));
        dp[i].insert(defaultNum);
    }
    for (int i = 1 ; i <dp.size(); ++i)
    {
        for (int j = 1; j < i; ++j)
        {
            for (int x : dp[j])
            {
                for (int y : dp[i-j])
                {
                    dp[i].insert(x+y);
                    dp[i].insert(x-y);
                    dp[i].insert(x*y);
                    
                    if (y != 0)
                    {
                        dp[i].insert(x/y);        
                    }
                }
            }
        }
        if (dp[i].find(number) != dp[i].end())
        {
            return i;
        }
    }
    
    return -1;
}
