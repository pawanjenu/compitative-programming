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
        return;
}
// reccursive
int solve(int num, vi &vis, vi &coins, int amount){
    if(num < 0){
        return amount+1;
    }
    if(num == 0)
        return 0;
    if(vis[num] != 0)
        return vis[num];
    int best = amount+1;
 
    for(auto &it: coins){
        if(num >= it){
            best = min(best, 1+ solve(num-it, vis, coins, amount));
        }
    }
    vis[num] = best;
    return best;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // file_input();
     lli n, amount;
    cin >> n >> amount;
    vlli coins(n);
    for(auto &it : coins){
        cin >> it;
    }
    vlli ways(amount+1, amount+1);
    // ways[0] = 0;
    for(lli i = 1; i <= amount; i++){

        for(auto it:coins){
            if(i - it >= 0 and ways[i] > 1+ ways[i -it])
                ways[i] = 1+ways[i-it];
                
        }
    }
    cout << (ways[amount] == amount+1 ? -1: ways[amount]);

}