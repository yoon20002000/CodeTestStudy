#include "TriSnail.h"

#include <iostream>

using namespace std;

vector<int> TriSnail::GetTriSnail(int n)
{
    // 2차원 배열 생성 꼭 삼각형 아니고 그냥 사각형으로 0으로 초기화
    vector<vector<int>> trinagle(n, vector<int>(n,0));

    // 방향 이동용
    int directions[3][2] = {{1, 0}, {0, 1}, {-1, -1}};
    int currentDirection = 0;

    int row =0, col = 0;
    int num = 1;
    int maxNum = n*(n+1)/2;

    while (num <= maxNum)
    {
        trinagle[row][col] = num;
        ++num;

        // 다음 좌표
        int nextRow = row + directions[currentDirection][0];
        int nextCol = col + directions[currentDirection][1];

        // 경계 확인 및 방향 전화
        if (nextRow < 0 || nextRow >= n||
            nextCol < 0 || nextCol > nextRow ||
            trinagle[nextRow][nextCol] != 0)
        {
            currentDirection = (currentDirection + 1) % 3;
            nextRow = row + directions[currentDirection][0];
            nextCol = col + directions[currentDirection][1];
        }

        row = nextRow;
        col = nextCol;
    }

    vector<int> result;

    for (int i = 0 ; i < n ; ++i)
    {
        for (int j = 0 ; j <= i; ++j)
        {
            result.push_back(trinagle[i][j]);
        }
    }
    
    return result;
}
