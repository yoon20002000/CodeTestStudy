#include "BFSPrac.h"

#include <queue>
#include <unordered_map>
#include <unordered_set>


using namespace std;

struct node
{
    int X = 0, Y = 0;

    node(int x, int y) : X(x), Y(y)
    {
    }

    bool operator==(const node& other) const
    {
        return other.X == X && other.Y == Y;
    }
};

struct nodeHash
{
    std::size_t operator ()(const node& n) const
    {
        return std::hash<int>()(n.X) ^ (std::hash<int>()(n.Y) << 1);
    }
};

int BFSPrac::EscapeMaze()
{
    vector<vector<int>> v =
    {
        {1, 0, 1, 0, 1},
{1, 1, 1, 0, 1},
{0, 1, 0, 1, 1},
{1, 1, 1, 1, 0},
{0, 0, 0, 1, 1}
    };


    int width = v[0].size();
    int height = v.size();

    queue<pair<node, int>> q;
    q.emplace(node(0, 0), 0);
    unordered_set<node, nodeHash> visited;

    while (q.empty() == false)
    {
        node n = q.front().first;
        int count = q.front().second;

        q.pop();

        if (n.X == width - 1 && n.Y == height - 1)
        {
            return count;
        }

        vector<node> visit;

        if (n.X - 1 >= 0 && v[n.X-1][n.Y] == 1)
        {
            visit.emplace_back(n.X - 1, n.Y);
        }
        if (n.X + 1 < width && v[n.X + 1][n.Y] == 1)
        {
            visit.emplace_back(n.X + 1, n.Y);
        }
        if (n.Y - 1 >= 0 && v[n.X][n.Y-1] == 1)
        {
            visit.emplace_back(n.X, n.Y - 1);
        }
        if (n.Y + 1 < height && v[n.X][n.Y + 1] == 1)
        {
            visit.emplace_back(n.X, n.Y + 1);
        }
        for (node vn : visit)
        {
            if (visited.find(vn) == visited.end())
            {
                visited.emplace(vn);
                q.emplace(vn, count + 1);
            }
        }
    }

    return -1;
}

vector<string> BFSPrac::SearchRelationship()
{
    unordered_map<string, vector<string>> friends = {
        {"A", {"B", "C"}},
        {"B", {"A", "D", "E"}},
        {"C", {"A", "F"}},
        {"D", {"B"}},
        {"E", {"B"}},
        {"F", {"C"}}
    };

    vector<string> relationShip;
    relationShip.reserve(friends.size());


    return relationShip;
}
