#include <bits/stdc++.h>

using namespace std;

#define lli long long int
#define ll long long
#define li long int
#define ld long double
#define vi vector<int>
#define vs vector<string>
#define vll vector<long long>
#define vl vector<long>
#define vlli vector<long long int>
#define pii pair<int, int>
#define plli pair<lli, lli>
#define endl "\n"
#define mod 1000000000+7

void file_input() {
    if (freopen("input.txt", "r", stdin) and
        freopen("output.txt", "w", stdout))
        return;
}
class Solution {
public:
    bool isInsideGrid(int i, int j, int COL, int ROW)
    {
        return (i >= 0 && i < COL && j >= 0 && j < ROW);
    }
    void wallsAndGates(vector<vector<int>>& rooms) {
        if(rooms.empty())  return;
        queue<pair<int, int>> cells;
        long int inf=pow(2,31)-1;
        int row = rooms[0].size();
        int col = rooms.size();
        for (int i = 0; i < col;++i) {
            for (int j = 0; j < row; ++j) {
                if(rooms[i][j] == 0)
                    cells.push({i,j});
            }
        }
        int level = 1;
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};
        if(cells.empty()) return;
        while (!cells.empty()){

                int x = cells.front().first;
                int y = cells.front().second;
                cells.pop();
                for (int i = 0; i < 4; ++i) {
                    int newx = x+dx[i];
                    int newy = y+dy[i];
                    if (isInsideGrid(newx,newy,col,row) and rooms[newx][newy] == inf) {
                        rooms[newx][newy] = rooms[x][y]+1;
                        cells.push({newx, newy});
                    }
                }
        }
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();

    return 0;
}