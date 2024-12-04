﻿#include "NeighborColor.h"

NeighborColor::NeighborColor(const vector<vector<string>>& board, const int h, const int w)
{
    solution(board,h,w);
}

int NeighborColor::solution(const vector<vector<string>>& board, const int h, int w)
{
    int count = 0;
    
    int n = board.size();
    
    int dh[4] ={0,1,-1,0};
    int dw[4] = {1,0,0,-1};
    
    for(int i = 0 ; i < 4; ++i)
    {
        int h_check = h + dh[i];
        int w_check = w + dw[i];
        if(h_check >= 0 && h_check< n && w_check >=0 && w_check<n)
        {
            if(board[h][w] == board[h_check][w_check])
            {
                ++count;
            }
        }
    }
    
    return count;
}
