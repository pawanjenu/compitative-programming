#include <bits/stdc++.h>
using namespace std;
 
int main()
 {
 ios::sync_with_stdio(0);
 cin.tie(0);
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 int n;
 cin >> n;
 string s;
 cin >> s;
 if(s.length() < 26){
     cout <<"NO";
     return 0;
 }
 unordered_map<char, int> dt;
 for(auto it: s){
     dt[tolower(it)]++;
 }

 if(dt.size() == 26)
    cout <<"YES";
else
    cout <<"NO";
 return 0;
}