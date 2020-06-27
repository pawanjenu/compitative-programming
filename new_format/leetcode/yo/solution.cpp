#include <bits/stdc++.h>
using namespace std;
 //https://www.hackerearth.com/challenges/test/pm-intern-2020/problems/c1d511fd7002466f87748c6a896dcabb/
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
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif 
return ;
}
int Solve(vector<int> vec, int k)
    {
        int n = vec.size();        
        if (k == n - 2) return vec.back() - vec.front();
        vector< vector<int> > dp(k + 1, vector<int>(n, 100000));
        
        dp[0][0] = 0;
        for (int i = 0; i <= k; ++i)
        {
            if (i == 0)
            {
                int maxDiff = 0;
                for (int t = 0; t < n; ++t)
                {
                    if (t - 1 >= 0) maxDiff = max(maxDiff, vec[t] - vec[t - 1]);
                    dp[i][t] = maxDiff;
                }
            }
            else
            {                                
                dp[i][0] = 0;
                for (int t = i + 1; t < n; ++t)
                {
                    for (int j = t - 1; j >= 0; --j)
                    {
                        int removeNum = t - j - 1;                           
                        if (removeNum > i) break;
                        dp[i][t] = min(dp[i][t], max(vec[t] - vec[j], dp[i - removeNum][j]));
                    }                                           
                }
            }            
        }
        
        return dp[k][n - 1];
    }
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    int n, k;
    cin >> n;
    vector<int> arr(n);
    for(auto &it: arr)
      cin >> it;
    cin >> k;
    cout<<Solve(arr,k);
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0;
}