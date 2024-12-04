#pragma once

class TransportNumber
{
public:
    TransportNumber(const int x, const int y, const int n);
private:

    bool isCanAdd(const int input, const int target, const int addNum);
    bool isCanMulti(const int input, const int target);
    bool isCanTriple(const int input, const int target);
    int bfs(int start, int target,int n);
private:
    
    
};
