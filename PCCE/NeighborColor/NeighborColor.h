#pragma once
#include <vector>
#include <string>
using namespace std;
class NeighborColor
{
public:
    NeighborColor(const vector<vector<string>>& board, int h, int w);
private:
    int solution(const vector<vector<string>>& board, int h, int w) ;
};
