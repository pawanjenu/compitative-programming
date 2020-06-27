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
    lli n;
    cin >> n;
    vi dices = {1,2,3,4,5,6};

    vi ways(n+1, 0);
    ways[0] = 1;
    for(int i = 0; i <= n; i++){
        for(auto it:dices){
            if(i - it >= 0)
                ways[i] += ways[i-it];
                ways[i] %= mod;
                
        }
    }
    cout << ways[n];
    
 return 0;
}