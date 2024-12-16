#include "NetworksDivide.h"

#include <iostream>
#include<algorithm>
int NetworksDivide::solution(int n, vector<vector<int>> wires)
{
    vector<vector<int>> networks(n + 1);
    // graph 생성
    for (const vector<int>& wire : wires)
    {
        networks[wire[0]].push_back(wire[1]);
        networks[wire[1]].push_back(wire[0]);
    }
    // 초기 값
    int minCount = n;
    for (int i = 0 ; i < wires.size(); ++i)
    {
        // 자르고 분리 됐을 때 차이 계산 값

        int u = wires[i][0];
        int v = wires[i][1];

        networks[u].erase(find( networks[u].begin(), networks[u].end(),v));
        networks[v].erase(find( networks[v].begin(), networks[v].end(),u));

        vector<bool> visited(n+1,false);
        int subtree = calculateSubtreeSize(1, networks,visited);
        int othertree =n-subtree;

        int netCounts = abs(subtree - othertree);
        
        minCount = min(minCount, netCounts);

        // 복구
        networks[u].push_back(v);
        networks[v].push_back(u);
    }
    
    return minCount;
}
int NetworksDivide::calculateSubtreeSize(int node, const vector<vector<int>>& graph,
    vector<bool>& visited)
{
    visited[node] = true;
    int size = 1;

    for (int neighbor : graph[node])
    {
        if (visited[neighbor] == false)
        {
            size += calculateSubtreeSize(neighbor, graph, visited);    
        }
    }
    
    return size;
}
void NetworksDivide::print_networks(const vector<vector<int>>& nw) const
{
    for (int i = 0; i < nw.size(); ++i)
    {
        cout << i +1 << " : ";
        for (int j : nw[i])
        {
            cout << j << " ";
        }
    }
}
