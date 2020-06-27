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
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif 
return ;
}
int main(){
    clock_t start,end;
    start = clock();
    ios::sync_with_stdio(0);
    cin.tie(0);
    // file_input();
    int n;
    cin >> n;
    // vector<vlli> arr(n, vlli(n, 0));
    // vector<vector<char>> arr(n, vector<char>(n));
    vector<string> arr(n);
    // for(auto &up: arr)
      for(auto &it: arr)
          cin >> it;
    // for(int i = 0; i < n; i++){
    //   for(int j = 0; j < n; j++){
    //     if(i == 0 and j == 0)
    //       continue;
    //     if(i == 0 and j > 0)
    //       arr[i][j]+= arr[i][j-1];
    //     else if(j == 0 and i > 0)
    //       arr[i][j]+= arr[i-1][j];
    //     else{
    //       arr[i][j]+= max(arr[i-1][j], arr[i][j-1]);
    //     }
    //   }
    // }
    vector<vi> dp(n, vi(n,0));
    // for(int i = 0; i < n; i++){
    //   dp[0][i] = 1;
    //   dp[i][0] = 1;
    // }
    
      dp[0][0] = arr[0][0] == '.';
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
          if(arr[i][j] == '*')
            continue;
          
          if(i > 0)  (dp[i][j] +=dp[i-1][j])%= mod;
          if(j > 0)  (dp[i][j] +=dp[i][j-1])%= mod;
      }
    }
    // cout<< dp[n-1][n-1];
      //   for(auto &up: dp){
      // for(auto &it: up)
      //     cout << it<<" ";
      //   cout << endl;
      //   }
      //   cout << endl;
    cout<< dp[n-1][n-1];
    end = clock();
    cerr<<"time taken : "<<(double)(end-start)/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0;
}