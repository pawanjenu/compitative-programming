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
    freopen("output.txt", "w", stdout) and 
    freopen("error.txt", "w", stderr))
return ;
}
class Solution {
public:
vector<vector<int>> dp;

    int lcs(string &x, string &y, int n, int m){
       if(n == 0 || m == 0)
          return 0;
      if(dp[n][m] != -1)
        return dp[n][m];
      
      if(x[n-1] == y[m-1])
          return dp[n][m] = 1+ lcs(x,y,n-1,m-1);
      else{
        return dp[n][m] = max(lcs(x,y,n-1,m),lcs(x,y,n,m-1));
      }
    }
    string shortestCommonSupersequence(string x, string y) {
        int n = x.length(), m = y.length();
        if(n == 0 || m == 0)
          return 0;
        dp.resize(n+1,vector<int>(m+1,-1));
        //recursion+ memo
        // return lcs(text1,text2,n,m);
        int i,j;
        for ( i = 0; i < n+1; i++)
        {
          dp[i][0] = 0;
        }
        for ( i = 0; i < m+1; i++)
        {
          dp[0][i] = 0;
        }
        for ( i = 1; i < n+1; i++){
          for ( j  = 1; j < m+1; j++){
              int &ans = dp[i][j];
              if(x[i-1] == y[j-1])
                ans = 1+ dp[i-1][j-1];
              else{
                ans = max(dp[i-1][j], dp[i][j-1]);
              }
          }
          
        }
        i = n;
        j = m;
      // for(auto it: dp){
      //   for(auto it2: it)
      //     cout << it2<<" ";
      //   cout <<endl;
      // }
      // cout << endl;
        string ans;
    while(i > 0 and j > 0){
      // cout << i <<" "<<x[i-1]<<" "<<j << " "<<y[j-1];
      if(x[i-1] == y[j-1]){
        ans.push_back(x[i-1]);
        i--;
        j--;
      }
      else
     { if(dp[i][j-1] < dp[i-1][j]){
        ans.push_back(x[i-1]);
        i--;
      }
      else{
        ans.push_back(y[j-1]);
        j--;
      }}
      // cout<<" #"<< ans<<endl;
    }
    while(i > 0){
      ans.push_back(x[i-1]);
      i--;
    }
        while(j > 0){
      ans.push_back(y[j-1]);
      j--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
    }
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    vi nums={};
    Solution obj;
    cout<<obj.shortestCommonSupersequence("abac", "cab");
    return 0;
}