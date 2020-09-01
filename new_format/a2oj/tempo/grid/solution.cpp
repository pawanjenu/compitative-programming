#include <bits/stdc++.h>

using namespace std;

struct cell
{
    int x, y;

    cell(int x, int y) : x(x), y(y) {}
};
class cmp
{
public:
    bool operator()(const pair<int, cell> &a, const pair<int, cell> &b)
    {
        if (a.first == b.first)
        {
            if (a.second.x != b.second.x)
                return (a.second.x > b.second.x);
            else
                return (a.second.x < b.second.x);
        }
        return (a.first > b.first);
    }
};
bool isInsideGrid(int i, int j, int COL, int ROW)
{
    return (i >= 0 && i < COL && j >= 0 && j < ROW);
}
bool is_stone(vector<vector<int>> &grid, int i, int j){
    if (grid[i][j] == 1)
        return true;
    return false;
}
int getMinEffort(vector<vector<int>> &grid)
{
    int n = grid.size(), m = grid[0].size();
    vector<vector<int>> dis(n, vector<int>(m, INT_MIN));
    dis[0][0] = 0;
    vector<vector<int>> vis(n, vector<int>(m, -1));
    priority_queue<pair<int, cell>, vector<pair<int, cell>>, cmp> que;
    que.push({0, cell(0, 0)});
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};
    // int t = 5;

    while (!que.empty())
    {
        cell a = que.top().second;
        que.pop();
        if (vis[a.x][a.y] != -1)
            continue;
        vis[a.x][a.y] = 1;

        for (int i = 0; i < 4; i++)
        {
            int x = a.x + dx[i];
            int y = a.y + dy[i];

            if (!isInsideGrid(x, y, n, m))
                continue;
            // cout <<'('<<a.x<<','<<a.y<<") - >" <<'('<<x<<','<<y<<")"<<" #abs: "<<abs(grid[x][y]- grid[a.x][a.y])<<endl;
            // cout <<"   "<<dis[a.x][a.y]<<"    "<<dis[x][y];
            if (dis[x][y] == INT_MIN or (dis[x][y] > dis[a.x][a.y] and dis[x][y] > abs(grid[x][y] - grid[a.x][a.y])))
            {

                dis[x][y] = max(abs(grid[x][y] - grid[a.x][a.y]), dis[a.x][a.y]);
                que.push({dis[x][y], cell(x, y)});
            }
            // cout<<"\n dist:"<<dis[x][y]<<endl<<endl;
        }
    }
    //   for(auto &it: dis){
    //         for(auto &it2: it)
    //             cout << it2<<" ";
    //         cout <<endl;
    //   }
    //   cout <<endl;
    return dis[n - 1][m - 1];
}
