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
    int weight;
    cin >> weight;
    vi val(n);
    vi wt(n);
    for(auto &it: wt)
      cin >> it;
    for(auto &it: val)
      cin >> it;
    
    vector<vi> dp(n+1, vi(weight+1));

    // dp[0][0] = 1;
    // for(int i = 1; i < n+1; i++)
    //   dp[i][0] = 0;
    // for(int i = 1; i < weight+1; i++)
    //   dp[0][i] = 0;

    // for(int i = 1; i < n+1; i++){
    //   for(int j = 1; j < weight+1; j++){
    //     if(wt[i-1] <= j){
    //       dp[i][j] = max(dp[i-1][j], val[i-1]+ dp[i-1][j- wt[i-1]]);
    //     }
    //     else{
    //       dp[i][j] = dp[i-1][j];
    //     }
    //   }
    // }

    vi cp(weight+1,0);
    // cp[0] = 0;
    for(int i = 0; i < n; i++){

      for(int j = weight; j > 0; j--){
        if(wt[i] <= j){
          cp[j] = max(cp[j], cp[j-wt[i]]+ val[i]);
        }
      }
    }
    cout << cp[weight];
    // for(auto it: dp){
    //   for(auto it2: it)
    //     cout << it2 <<" ";
    //   cout << endl;
    // }
    
    // cout << dp[n][weight];

    end = clock();
    cerr<<"time taken : "<<(double)(end-start)/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0;
}