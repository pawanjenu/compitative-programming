#include <bits/stdc++.h>
using namespace std;
unordered_map<int, int> mp;

int fibb(int n){
    if(mp[n]){
        return mp[n];
    }
    if(n == 0 or n == 1)
        return n;
    else
    {
        mp[n] =  fibb(n-1)+ fibb(n-2);
    }
    return mp[n];
    
    
}
int main()
 {
 ios::sync_with_stdio(0);
 cin.tie(0);
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 int n;
 cin >> n;
// cout << n;
n = fibb(n);
cout << n;
 return 0;
}