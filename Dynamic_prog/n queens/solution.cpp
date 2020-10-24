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

void printSolution(vector<vector<int>>grid)
{
    int N = grid.size();
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf(" %d ", grid[i][j]);
        printf("\n");
    }
}

bool issafe(vector<vector<int>>grid, int row, int col)
{
    int i, j;
    int N = grid.size();
    /* Check this row on left side */
    for (i = 0; i < col; i++)
        if (grid[row][i])
            return false;

    /* Check upper diagonal on left side */
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (grid[i][j])
            return false;

    /* Check lower diagonal on left side */
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (grid[i][j])
            return false;

    return true;
}
void file_input() {
    if (freopen("input.txt", "r", stdin) and
        freopen("output.txt", "w", stdout))
        return;
}
bool solve(vector<vector<int>> &grid, int col){

    int rows = grid.size();
    if (col >= rows){
        return true;
    }
    for(int i = 0; i < rows; i++){
        if (issafe(grid,i,col)){
            grid[i][col] = 1;
            if (solve(grid,col+1)){
                return true;
            }
            grid[i][col] = 0;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
     vector<vector<int>>grid = { { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 } };

     solve(grid,0);
     printSolution(grid);
    return 0;
}