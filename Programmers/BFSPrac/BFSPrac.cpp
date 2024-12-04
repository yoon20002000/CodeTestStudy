#include "BFSPrac.h"

#include <queue>
#include <unordered_map>
#include <unordered_set>


using namespace std;

struct node
{
    // column, row
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
    vector<vector<int>> maze =
    {
        {1, 0, 0, 0},
    {1, 1, 0, 1},
    {0, 1, 1, 1},
    {1, 1, 1, 1}
    };


    int width = maze[0].size(); 
    int height = maze.size();

    vector<pair<int, int>> directions = { {-1,0},{1,0} ,{0,-1} ,{0,1} };

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

        for (pair<int, int> dir : directions)
        {
            node nextNode(n.X + dir.first, n.Y + dir.second);

            if (nextNode.X >= 0 && nextNode.X< width &&
                nextNode.Y >=0 && nextNode.Y <height &&
                
                maze[nextNode.Y][nextNode.X] == 1 &&
                visited.find(nextNode) == visited.end()
                )
            {
                visited.emplace(nextNode);
                q.emplace(nextNode, count + 1);
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
