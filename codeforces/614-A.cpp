#include <bits/stdc++.h>
using namespace std;
 
int main()
 {
 ios::sync_with_stdio(0);
 cin.tie(0);
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
int t;
 cin >> t;
 while (t--)
 {
     long long n, s,k;
     cin >> n >> s >> k;
     unordered_map<int, int> mp;
     bool is_open = 0;
     for(long long i = 1; i <= k; i++){
         int x;
         cin >> x;
         mp[x]++;
        
     }

     if(!mp[s]){
        cout <<0<<endl;
        
     }
     else{
    long long  least = LONG_LONG_MAX;
     for(int i = s; i >=1; i--){
         if(!mp[i]){
             //cout <<i <<" "<< (s-i)<<endl;
             least = min(least,s-i);
             break;
         }
     }
     for(int i = s; i <=n; i++){
         if(!mp[i]){
             //cout <<i <<" "<< (s-i)<<endl;
             least = min(least,i-s);
             break;
         }
     }
    cout << least<<endl;
     }
 }
 
 return 0;
}