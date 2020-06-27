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


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    int n, amount;
    cin >> n >> amount;
    vi coins(n); 
    for(auto &it : coins){
        cin >> it;
    }
    
    vi ways(amount+1);
    ways[0] = 1;
     for(auto it:coins){
    for(int i = 1; i <= amount; i++){
            if(i >= it)
                ways[i] += ways[i-it];
                ways[i]%=mod; 
        }
    }
    cout << ways[amount];

 return 0;
}