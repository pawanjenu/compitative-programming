#include <bits/stdc++.h>
using namespace std;
 
int main()
 {
 ios::sync_with_stdio(0);
 cin.tie(0);
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 string s;
 cin >> s;
 unordered_map<char, int> data;
 for(auto it:"nineteen")
        data[it] = 0;

// n3,i1,e3,t1

for(auto it: s){
    data[it]++;
}
int mn = INT_MAX;
mn = max((data['n']-1)/2,0);
mn = min(mn,data['i']);
mn = min(mn, data['e']/3);
mn = min(mn, data['t']);
cout << mn;

 return 0;
}