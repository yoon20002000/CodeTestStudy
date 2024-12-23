#include "Puddle.h"

int Puddle::solution(int m, int n, vector<vector<int>> puddles)
{
    vector<vector<int>> dp(n,vector<int>(m,0));

    for (vector<int> puddle : puddles)
    {
        dp[puddle[1]-1][puddle[0]-1] = -1;
    }

    dp[0][0] = 1;
    
    for (int i = 0 ; i < n ; ++i)
    {
        for (int j = 0 ; j < m ; ++j)
        {
            if (dp[i][j] == -1)
            {
                dp[i][j] = 0;
                continue;
            }
            else
            {
                if (i >0)
                {
                    dp[i][j] += dp[i-1][j];
                    dp[i][j] %= 1000000007;
                }

                if (j > 0)
                {
                    dp[i][j] += dp[i][j-1];
                    dp[i][j] %= 1000000007;
                }
            }
        }
    }
    
    return dp[n-1][m-1] ;
}

