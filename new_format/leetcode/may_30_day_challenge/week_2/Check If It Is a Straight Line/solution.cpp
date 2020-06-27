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
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        if(n  < 2)
              return false;
        if(n == 2)
                return true;
        else{
            int x1,y1,x2,y2,x3,y3;
            x1 = coordinates[0][0];
            y1 = coordinates[0][1];
            x2 = coordinates[1][0];
            y2 = coordinates[1][1];
            for(int i = 2; i < n; i++){
                x3 = coordinates[i][0];
                y3 = coordinates[i][1];
                if((x2-x1)*(y3-y1) - (y2-y1)*(x3-x1) != 0)
                    return false;
            }

        }
        return true;

    }
};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    vi nums = {};
    Solution obj;
    return 0;
}