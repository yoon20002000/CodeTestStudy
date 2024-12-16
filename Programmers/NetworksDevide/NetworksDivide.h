#pragma once
#include <vector>

using namespace std;

class NetworksDivide
{
public:
    int solution(int n, vector<vector<int>> wires);
protected:
    void print_networks(const vector<vector<int>>& nw) const;
private:
    int calculateSubtreeSize(int node, const vector<vector<int>>& graph, vector<bool>& visited);
};
