#include "Rhombus.h"

#include <iostream>

vector<int> Rhombus::solution(int n)
{
    vector<vector<int>> rhombus(2*n -1,vector<int>(2*n -1,0));
    int columnCount = 1;

    int num = 1;
    
    for (int i = 0 ; i < 2*n -1; ++i)
    {
        
        // 빈칸 넣고
        int x = 0;
        for ( ; x < n - columnCount;++x)
        {
            rhombus[i][x]=0;
        }
        // 수 넣고
        for (int j = 0; j < columnCount; ++j, ++num,++x)
        {
            rhombus[i][x]=num;
        }
        
        if (i+1 >=n)
        {
            --columnCount;
        }
        else
        {
            ++columnCount;
        }
    }

    for (auto v : rhombus)
    {
        for (auto vv : v)
        {
            if (vv == 0)
            {
                cout << " ";
            }
            else
            {
                cout << vv << " ";    
            }
        }
        cout<<endl;
    }
    
    vector<int> result;
    for (int i = 0 ; i < 2*n -1 ; ++i)
    {
        for (int j = 0 ; j < n; ++j)
        {
            if (rhombus[i][j] != 0)
            {
                result.push_back(rhombus[i][j]);    
            }
        }
    }
    return result;
}
