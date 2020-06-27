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
void solve(){
  int n, k;
  cin >> n >> k;
  vi arr(k+1);
  for(int i = 1; i <=k; i++)
    cin >> arr[i];
  vector<vi> dp(k+1, vi(k+1, 500000));


  for(int i = 0; i < k+1; i++){
    dp[i][0] = 0;

  }
  
  for(int i = 1; i < k+1; i++){
    for(int j = 1; j <= i; j++){
      int &ans = dp[i][j];
      
      if(arr[i] == -1){
       ans = dp[i-1][j];
       continue;
      }
      
        ans = min(dp[i-1][j], arr[i ]+dp[i][j-i]);
      
    }
  }

  // for(auto it: dp){
  //   for(auto it2: it)
  //     cout << it2<<" ";
  //   cout << endl;
  // }
  if(dp[k][k] >= 500000)
      cout << -1;
  else
    cout <<dp[k][k];
  cout << endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    int t;
    cin >> t;
    while(t--){

      solve();
    }

    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0;
}