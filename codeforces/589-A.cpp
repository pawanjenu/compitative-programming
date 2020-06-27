#include <bits/stdc++.h>
using namespace std;
 
int main()
 {
 ios::sync_with_stdio(0);
 cin.tie(0);
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 int l,r;
 cin >> l >> r;

 for(int i = l; i <=r; i++){
int found = 0;
     string s = to_string(i);
     unordered_map<int, int> mp;
     int flag = 1;
     for(auto it: s){
         mp[it]++;
         if(mp[it] > 1)
            flag = 0;
      
         }
    if(flag){
        cout << i;
        break;
    }

 }
 cout << -1;

 return 0;
}