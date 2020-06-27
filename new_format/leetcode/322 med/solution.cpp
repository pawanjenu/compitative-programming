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
class Solution {
public:
vector<int> dp;
int mincoins(vector<int>& coins, int num,  int amount) {
        if(num < 0)
          return -1;
        if(num == 0)
          return 0;
        int &dpans = dp[num];
        if(dpans!= -2)
          return dpans;
        int ans = amount+1;
        for(auto &c: coins){
          int tempans;
          if(num >= c)
          tempans = mincoins(coins,num-c, amount);
          if(tempans >= 0)
            ans = min(ans, 1+ tempans);
        }
        // cout << ans<<endl;
        dpans = ans;
        if(ans == amount+1)
          return -1;
        else
          return dpans;
    }
    int coinChange(vector<int>& coins, int amount) {
        dp.resize(amount+1, -2);
        return mincoins(coins,amount,amount);
    }
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();

    vi nums={1,2,5};
    Solution obj;
    cout << obj.coinChange(nums,11);
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0;
}