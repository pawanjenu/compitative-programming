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
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    while(true){
      string s;
      cin >> s;
      if(s[0] == '0')
        break;
      
      int len = s.length();
      vi dp(len+1, 0); // array 
      dp[0] = 1; // length 0 - 1 way
      dp[1] = 1; // length 1- 1 way

      for(int i = 2; i < len+1; i++){
        char c1 = s[i-2]-'0', c2 = s[i-1]-'0';

        if(c1 == 1 || (c1 == 2 && c2 <= 6))
          dp[i] +=dp[i-2];
        if(c2!= 0)
          dp[i] += dp[i-1];
      }
      cout << dp[len]<<endl;
    }
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0;
}