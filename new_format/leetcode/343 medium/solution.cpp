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

void file_input(){
    if(freopen("input.txt", "r", stdin) and
    freopen("output.txt", "w", stdout))
return ;
}
class Solution {
public:

    int find(int n, vector<int> &dp){
        if(n ==0 || n == 1)
            return 1;
        if(dp[n])
            return dp[n];
        int maxx = 0;
        for(int i = 1; i < 10; i++){
            if(n >= i){
                maxx = max(maxx, i * find(n-i, dp));
            }
        }
        dp[n] = maxx;
        return maxx;
    }
    int integerBreak(int n) {
        if(n <= 3)
            return n-1;
        vector<int> dp(n+1);
        return find(n, dp);
    }
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    Solution obj;
    cout << obj.integerBreak(10);
    return 0;
}