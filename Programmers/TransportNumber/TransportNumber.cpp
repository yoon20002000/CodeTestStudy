#include "TransportNumber.h"

#include <iostream>
#include <queue>
#include <unordered_set>
using namespace std;

TransportNumber::TransportNumber(const int x, const int y, const int n)
{
    std::cout << "Num : " << bfs(x,y,n);
}

bool TransportNumber::isCanAdd(const int input, const int target, const int addNum)
{
    return input + addNum <= target;
}

bool TransportNumber::isCanMulti(const int input, const int target)
{
    return input * 2 <= target;
}

bool TransportNumber::isCanTriple(const int input, const int target)
{
    return input * 3 <= target;
}
int TransportNumber::bfs(int x, int y, int n)
{
    queue<pair<int, int>> q;
    unordered_set<int> visited;
    
	q.push({ x,0 });

    while (q.empty() == false)
    {
        int num = q.front().first;
        int step = q.front().second;
        q.pop();

        if (num == y)
        {
            return step;
        }

		unordered_set<int> visit = { num + n, num * 2,num * 3 };
        for (int v : visit)
        {
            if (v <= y && visited.find(v) == visited.end());
            {
                visited.insert(v);
                q.push({ v, step + 1 });
            }
        }
    }
    return -1;
}