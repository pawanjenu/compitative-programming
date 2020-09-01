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
bool isInsideGrid(int i, int j, int COL, int ROW)
{
    return (i >= 0 && i < COL && j >= 0 && j < ROW);
}
int minHours(vector<vector<int>> grid) {
    queue<pair<int, int>> cells;
    int row = grid[0].size();
    int col = grid.size();
    int target = 0;
    int humans = 0;
    for (int i = 0; i < col;++i) {
        for (int j = 0; j < row; ++j) {
            if (grid[i][j] == 1) {
                cells.push({i, j});
            }
            else{
                humans++;
            }
        }
    }
    int days = 0;
    while (!cells.empty()){
        int len = cells.size();
        for(int i = 0; i < len; i++){
            int dx[] = {-1, 0, 1, 0};
            int dy[] = {0, 1, 0, -1};
            int x,y;
            tie(x,y) = cells.front();
            cells.pop();
            for (int j = 0; j < 4; ++j) {
                int newx = x+dx[j];
                int newy = y+dy[j];
                if(isInsideGrid(newx, newy, col,row) and grid[newx][newy] == 0){
                    humans--;
                    grid[newx][newy] = 1;
                    cells.push({newx,newy});
                }
            }
        }
        days++;
    }
    return days;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    vector<vector<int>> grid ={{ 0, 1, 1, 0, 1 }, { 0, 1, 0, 1, 0 }, { 0, 0, 0, 0, 1 }, { 0, 1, 0, 0, 0 }};
    cout << minHours(grid);
    return 0;
}